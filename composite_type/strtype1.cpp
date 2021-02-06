//strtype1.cpp --using the C++ string class
#include<iostream>
#include<string>    //make string class available

int main()
{
    using namespace std;
    string s1;    //create an empty array
    string s2="panther";  //create an initialized string

    cout<<"Enter a kind of feline: ";
    cin>>s1;
    cout<<"Here are some felines: "<<s1<<endl;
    cout<<"Here are some felines,too: "<<s2<<endl;
    cout<<"There third letter in "<<s1<<" is "<<s1[2]<<endl;

    return 0;
}


