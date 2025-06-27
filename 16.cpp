#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Character {
protected:
    string name;
    int health;
    int damage;

public:
    Character(string n, int h, int d)
        : name(n), health(h), damage(d) {
    }

    virtual void attack(Character& enemy) {
        enemy.health -= damage;
        if (enemy.health < 0) enemy.health = 0;
        cout << name << " атакует " << enemy.name << " на " << damage << " урона!" << endl;
        cout << enemy.name << " осталось " << enemy.health << " HP." << endl << endl;
    }

    void heal(int amount) {
        health += amount;
        cout << name << " восстановил " << amount << " HP. Теперь у него " << health << " HP." << endl << endl;
    }

    bool isAlive() const {
        return health > 0;
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
        cout << name << " лечит " << owner.getName() << " на " << healAmount << " HP!" << endl;
        owner.heal(healAmount);
    }

    void attackEnemy(Character& enemy) {
        int petDamage = 5;
        cout << name << " атакует " << enemy.getName() << " и наносит " << petDamage << " урона!" << endl;
        enemy.attack(enemy); 
        enemy = Character(enemy.getName(), enemy.getHealth() - petDamage, 0); 
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned>(time(0)));

    Character player("Игрок", 100, 15);
    Character enemy("Скелет", 80, 10);
    Pet pet("Рекс");

    while (player.isAlive() && enemy.isAlive()) {
        player.attack(enemy);
        if (!enemy.isAlive()) {
            cout << enemy.getName() << " повержен!" << endl;
            break;
        }

        int action = rand() % 2;
        if (action == 0)
            pet.healOwner(player);
        else
            pet.attackEnemy(enemy);

        enemy.attack(player);
        if (!player.isAlive()) {
            cout << player.getName() << " пал в бою!" << endl;
            break;
        }
    }

}
