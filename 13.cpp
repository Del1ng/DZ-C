#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    Student(const string& name, int grade) : name(name), grade(grade) {}

    bool isPassed() const {
        return grade >= 60;
    }

    void print() const {
        cout << name << " — " << grade << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Russian");
    vector<Student> students = {
    Student("Алексей", 75),
    Student("Мария", 58),
    Student("Иван", 90),
    Student("Ольга", 45),
    Student("Дмитрий", 65)
    };

    cout << "Студенты, которые сдали экзамен:" << endl;
    for (const auto& student : students) {
        if (student.isPassed()) {
            student.print();
        }
    }

}