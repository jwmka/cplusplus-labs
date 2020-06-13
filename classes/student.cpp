#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int group;
        Student(string n, int g, float a) {
            name = n;
            group = g;
            age = a;
            average = 3;
        }
        void sumAvergate(float num) {
            average += num;
        }
        void mulAvergate(float num) {
            average = average * num;
        }
        float getAverage() {
            return average;
        }
    private:
        int age;
        float average;
};

int main() {
    Student stud1 = Student("Danil", 111, 18);
    Student stud2 = Student("Nikita", 222, 20);

    stud1.mulAvergate(0.98);
    stud2.sumAvergate(0.1);

    cout << "Student 1 average is > " << stud1.getAverage() << endl;
    cout << "Student 2 average is > " << stud2.getAverage() << endl;
}

