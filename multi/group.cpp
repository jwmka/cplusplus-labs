#include "group.h"

using namespace std;
Group ::Group()
{
    cout << "Enter name of group: ";
    cin >> groupName;
    first = NULL;
}
void Group::addStudent()
{
    Student *newStudent = new Student;
    newStudent->setName();
    newStudent->setRating();
    newStudent->next = first;
    first = newStudent;

    cout << "first -> " << first << endl;
    cout << "next -> " << newStudent->next << endl;
}
void Group ::display()
{
    int totalRating = 0;
    Student *current = first;
    cout << groupName << endl;
    int i = 0;
    while (current)
    {
        i++;
        cout << i << ". " << current->getName() << endl;
        totalRating += current->getRating();
        current = current->next;
    }

    cout << "Average rating -> " << totalRating / i << endl;
}
Group ::~Group()
{
    Student *current = first;
    while (current != NULL)
    {
        Student *temp = current;
        current = current->next;
        delete temp;
    }
    cout << "All elements are deleted" << endl;
}