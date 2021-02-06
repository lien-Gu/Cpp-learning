//strtype2.cpp --assigning, adding,and appending
#include<iostream>
#include<string>    //make string class available

int main()
{
    using namespace std;
    string s1="panther";
    string s2,s3;

    s2=s1;
    cout<<"s1: "<<s1<<", s2: "<<s2<<endl;
    s2="buzzard";
    cout<<"s2: "<<s2<<endl;
    s3=s1 + s2;
    cout<<"s3: "<<s3<<endl;
    s2+=" for a day";
    cout<<"s2: "<<s2<<endl;

    int len1=s2.size(); //obtain length of s1
    cout<<"the length of s2: "<<len1<<endl;

    return 0;
}
