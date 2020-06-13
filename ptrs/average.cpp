#include <iostream>
using namespace std;
class Student
{
    char name[40];
    float rating;
    static int numberStudents;
    static float totalRating;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter rating: ";
        cin >> rating;
        numberStudents++;
        totalRating += rating;
    }
    void getData()
    {
        cout << name << ": " << rating << endl;
    }
    int getNumberStudents()
    {
        return numberStudents;
    }
    float getTotalRating() {
        return totalRating;
    }
};
int Student::numberStudents = 0;
float Student::totalRating = 0.0;

class Chieftain
{
private:
    string name;
    float rating;

public:
    Chieftain(string n, float r) {
        name = n;
        rating = r;
    }
    void getData()
    {
        cout << "Chief's name is " << name << "- rating is " << rating << endl;
    }
};

int main()
{
    Student *studPtr[30];
    int n = 0;
    char ch;
    do
    {
        studPtr[n] = new Student;
        studPtr[n]->setData();
        n++;
        cout << "Enter next (y/n)? ";
        cin >> ch;
    } while (ch == 'y');
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ";
        studPtr[i]->getData();
    }

    cout << "Number Students: " << studPtr[0]->getNumberStudents() << endl;
    cout << "Average rating is " << studPtr[0]->getTotalRating()/studPtr[0]->getNumberStudents() << endl;

    for (int i = 0; i < n; ++i)
        delete studPtr[i];

    cout << "Sizeof StudentPTR arr is " << sizeof studPtr << endl;
    cout << "Sizeof Student instance is " << sizeof studPtr[0] << endl;

    Chieftain chief("John", 100);
    chief.getData();

    return 0;
}