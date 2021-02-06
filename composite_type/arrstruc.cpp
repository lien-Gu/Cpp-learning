//arrstruc.cpp -- an array of structure
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
    inflatable guest[2] =   //initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout<<"The guests "<<guest[0].name<<" and "<<guest[1].name
        <<"have a combined volume of "
        <<guest[0].volume + guest[1].volume
        <<" cubic  feet."<<endl;

    return 0;
}

