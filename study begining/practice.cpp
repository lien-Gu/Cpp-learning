#include<iostream>
#include<string.h>
using namespace std;
//function prototype
void function1();


int main()
{
function1();//show name and address

}
void function1()//show name and address
{
	string name,addr;
	cout<<"Enter your name and address ,a space between:";
	cin>>name>>addr;
	cout<<"name: "<<name<<endl<<"address: "<<addr<<endl;
}