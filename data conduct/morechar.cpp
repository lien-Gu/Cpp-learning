//morechar.cpp -- the char type and int type constrasted
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';	//assign ASCII code for M to ch
	int i = ch;		//store same code in an integer

	cout<<"Add  one to the character code: "<<endl;
	ch++;	//change character code
	i=ch;
	cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

	//using the cout.put() member function to display a char
	cout<<"Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	//using the cout.put() to display a char constant
	cout.put('!');
	cout<<endl<<"Done"<<endl;
	return 0;
}