//practice.cpp -- 输入全中国人口数量，全球人口数量，返回人口占比
#include <iostream>
int main()
{
	using namespace std;
	long long popu_world,popu_ch;

	cout<<"Enter the world's population: ";
	cin>>popu_world;
	cout<<endl;
	cout<<"Enter the population of china:";
	cin>>popu_ch;
	cout<<endl;
	
	double frac = popu_ch / popu_world;
	cout<<"The population of the US is 4.50492% of the world population"<<endl;
 	return 0;
}