#include "group.h"

int main()
{
    Group *groupPtr[30];
    int n = 0;
    char ch;
    char ch2;
    do
    {
        groupPtr[n] = new Group;
        do
        {
            groupPtr[n]->addStudent();
            cout << "Enter next (y/n)? ";
            cin >> ch2;
        } while (ch2 == 'y');
        n++;
        cout << "Add one more group (y/n)? ";
        cin >> ch;
    } while (ch == 'y');

    for (int i = 0; i < n; i++)
    {
        groupPtr[i]->display();
    }

    cout << "Number students: " << Student::snumber << endl;
    return 0;
}