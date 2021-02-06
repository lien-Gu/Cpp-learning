//enum.cpp -- using enum
#include<iostream>
//create named constants for 0 - 6
enum {red, orang, yellow, green, blue, voilet, indigo};

int main()
{
    using namespace std;
    cout<<"Enter color code (0-6):";
    int code;
    cin>>code;
    while(code >= red && code <= indigo)
    {
        switch(code)
        {
            case red:cout<<"Her lips were red.\n";break;
            case orang:cout<<"Her hair were orang.\n";break;
            case yellow:cout<<"Her shoes were yellow.\n";break;
            case green:cout<<"Her nails were green.\n";break;
            case blue:cout<<"Her sweatsuit were blue.\n";break;
            case voilet:cout<<"Her eyes were voilet.\n";break;
            case indigo:cout<<"Her mood were indigo.\n";break;
        }
        cout<<"Enter color code (0-6):";
        cin>>code;
    }

    cout<<"Bye\n";

    return 0;
}
