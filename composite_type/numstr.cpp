//numstr.cpp -- following number input with line input
#include<iostream>
int main()
{
    using namespace std;
    cout<<"What year was your house built?"<<endl;
    int year;
    cin>>year;
    cout<<"What is its street address?"<<endl;
    char address[80];

    cin.get();//or cin.get(ch);  or (cin>>year).get()

    cin.getline(address,80);
    cout<<"Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;

    return 0;
}
