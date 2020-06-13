#include <iostream>

using namespace std;
class Student
{
private:
    string name;
    float rating;
public:
    Student *next;
    void setName();
    void setRating();
    string getName();
    float getRating();
    Student();
    static int snumber;
};