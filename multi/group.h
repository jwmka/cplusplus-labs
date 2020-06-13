#include "student.h"
class Group
{
    Student *first;
    string groupName;

public:
    Group();
    ~Group();
    void addStudent();
    void display();
};