#include <iostream>
#include "student.h"

Student ::Student()
{
    snumber++;
}
void Student ::setName()
{
    cout << "Enter name: ";
    cin >> name;
}
string Student :: getName() 
{
    return name;
}
void Student :: setRating()
{
    cout << "Enter rating: ";
    cin >> rating;
}
float Student :: getRating() 
{
    return rating;
}
int Student :: snumber = 0;