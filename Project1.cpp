#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Character {
protected:
    string name;
    int health;
    int damage;
    int defense;

public:
    Character(string n, int h, int d, int def)
        : name(n), health(h), damage(d), defense(def) {
    }

    virtual void attack(Character& enemy) {
        int dodge = rand() % 100;
        if (dodge < 30) {
            cout << enemy.name << " уклонился от атаки!" << endl << endl;
            return;
        }

        int totalDamage = damage - enemy.defense;
        if (totalDamage < 0) totalDamage = 0;
        enemy.health -= totalDamage;
        if (enemy.health < 0) enemy.health = 0;

        cout << name << " атакует " << enemy.name << " на " << totalDamage << " урона!" << endl;
        cout << enemy.name << " осталось " << enemy.health << " HP." << endl << endl;
    }

    bool isAlive() const {
        return health > 0;
    }

    void heal(int amount) {
        health += amount;
        cout << name << " восстановил " << amount << " HP! Теперь у него " << health << " HP." << endl << endl;
    }

    string getName() const { return name; }
    int getHealth() const { return health; }
};

class Pet {
private:
    string name;

public:
    Pet(string n) : name(n) {}

    void healOwner(Character& owner) {
        int healAmount = 10;
        cout << name << " лечит своего хозяина!" << endl;
        owner.heal(healAmount);
    }

    void attackEnemy(Character& enemy) {
        int petDamage = 5;
        enemy.attack(enemy); 
        enemy = Character(enemy.getName(), enemy.getHealth() - petDamage, 0, 0);
        cout << name << " атакует врага и наносит " << petDamage << " урона!" << endl << endl;
    }
};

class Player : public Character {
private:
    vector<string> inventory;
    Pet pet;

public:
    Player(string n, int h, int d, int def, Pet p)
        : Character(n, h, d, def), pet(p) {
    }

    void addItem(string item) {
        inventory.push_back(item);
        cout << name << " получил предмет: " << item << endl;
    }

    void showInventory() const {
        cout << "Инвентарь " << name << ": ";
        for (const string& item : inventory)
            cout << item << " ";
        cout << endl << endl;
    }

    void usePet(Character& enemy) {
        int action = rand() % 2;
        if (action == 0)
            pet.healOwner(*this);
        else
            pet.attackEnemy(enemy);
    }
};

Player chooseClass() {
    cout << "Выберите класс:" << endl;
    cout << "1. Воин (урон 15, защита 10)" << endl;
    cout << "2. Маг (урон 20, защита 5)" << endl;
    cout << "3. Вор (урон 12, защита 7)" << endl;
    int choice;
    cin >> choice;

    Pet pet("Шарик");

    if (choice == 1)
        return Player("Игрок-Воин", 100, 15, 10, pet);
    else if (choice == 2)
        return Player("Игрок-Маг", 100, 20, 5, pet);
    else
        return Player("Игрок-Вор", 100, 12, 7, pet);
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned>(time(0)));

    Player player = chooseClass();
    player.addItem("Зелье здоровья");
    player.addItem("Кинжал");
    player.showInventory();

    Character enemy("Скелет", 80, 10, 5);

    while (player.isAlive() && enemy.isAlive()) {
        player.attack(enemy);
        if (!enemy.isAlive()) {
            cout << enemy.getName() << " повержен!" << endl;
            break;
        }

        player.usePet(enemy);

        if (enemy.isAlive()) {
            enemy.attack(player);
            if (!player.isAlive()) {
                cout << player.getName() << " пал в бою!" << endl;
                break;
            }
        }
    }
}
