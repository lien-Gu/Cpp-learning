//structur.cpp -- a simple structure
#include<iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal =
    {
        "Audacious Arther",
        3.12,
        32.99
    };
    cout<<"Expand your guest list with "<<guest.name
        <<" and "<<pal.name<<" !"<<endl;
    cout<<"You can have both for $"<<guest.price+pal.price<<"!"<<endl;

    return 0;
}
