//bondini.cpp -- using escape sequence
#include <iostream>
int main()
{
	using namespace std;
	cout<<"\aOperation \"HyperHype\" is now activated!\n"
	       <<"Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin>>code;
	cout<<"\aYou entered "<<code<<"...\n"
	       <<"\a Code verified! Proceed with Plan Z3!\n";
	return 0;
}