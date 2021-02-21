/**
编写一个菜单驱动程序。该程序显示一个提供4个选项的菜单——每个选项用一个字母标记。
如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止，
然后，改程序使用一条switch语句，根据用户的而选择执行一个简单的操作。
**/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Please enter one of the following choices:"<<endl;
    cout<<"c) carnivore          p) pianist"<<endl;
    cout<<"t) tree               g) game"<<endl;
    char ch;
    while(cin>>ch)
    {
        if(ch!='c'&&ch!='p'&&ch!='t'&&ch!='g')
            cout<<"Please enter a c, p, t or g:";
        else
            switch (ch)
        {
        case 'c':
            cout<<"A maple is a carnivore."<<endl;
            break;
        case 'p':
            cout<<"A maple is a pianist."<<endl;
            break;
        case 't':
            cout<<"A maple is a tree."<<endl;
            break;
        case 'g':
            cout<<"A maple is a game."<<endl;
            break;
        }
}

    return 0;
}
