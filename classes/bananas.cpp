#include <iostream>
#include <array>
using namespace std;

class Food
{
public:
    string name;
    float price;
    Food(string s, float p, float w)
    {
        name = s;
        price = p;
        weight = w;
    }
    float getWeight()
    {
        return weight;
    }

private:
    float weight;
};
int main()
{
    float totalWeight = 0;
    float totalPrice = 0;
    Food orange1("Valencia", 21, 96);
    Food orange2("Tarocco", 22, 105);

    totalPrice += orange1.price + orange2.price;
    totalWeight += orange1.getWeight() + orange2.getWeight();
    
    Food apple[3] = {Food("Golden", 10.50, 112),
                     Food("McIntosh", 11.99, 100), Food("Jonathan", 12, 120)};

    for (int i = 0; i < 3; i++)
    {
        totalPrice += apple[i].price;
        totalWeight += apple[i].getWeight();
    }   

    Food bananas[4] = {
        Food("Green", 1, 111),
        Food("Ripe", 2, 222),
        Food("Overripe", 3, 333),
        Food("Yellow", 4, 444)
    };

    for (int i = 0; i < 4; i++)
    {
        totalPrice += bananas[i].price;
        totalWeight += bananas[i].getWeight();
    }
    
    cout << "Total fruits price >>> " << totalPrice << endl;
    cout << "Total fruits weight >>> " << totalWeight << endl;

    cout << "Size of instance" << sizeof bananas << endl;
    cout << "Size of class" << sizeof (Food) << endl;
    return 0;
}
