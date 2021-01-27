//hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	
	cout<<"Monsieur cuts a striking figure!"<<endl
	       <<"chest = "<<chest<<" (decimal for 42)"<<endl;
	cout<<hex	//manipulate for changing number base
	       <<"waist = "<<waist<<" (hexademical for 42)"<<endl;
	cout<<oct	//manipulate for changing number base
	       <<"inseam = "<<inseam<<" (octal for 42)"<<endl;
	return 0;
}