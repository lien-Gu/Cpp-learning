#include <iostream>//标准输入输出库
#include <cmath>//数学函数库,math.h也可以
int main()
{
using namespace std;//声明变量空间

double area;//声明变量
cin>>area;//输入变量
cout<<sqrt(area)<<endl;//输出平方
cout<<pow(5.0,8.0)<<endl;//输出某次方
cout<<rand()<<endl;//输出一个随机数
cin.get();//使窗口保持
return 0;//返回语句
}
/*
int main()
{
  using namespace std;//声明变量空间

  cout<<"come up and C++ me some time.";//输出语句
  cout<<endl;//换行符

  int carrots;//声明变量
  cout<<"How many carrots do u have?"<<endl;
  cin>>carrots;//输入变量
  cout<<"Crunch,Crunch.Now I have "<<carrots-1<<" carrots."<<endl;
  cin.get();//使窗口保持
  return 0;
}
*/