/**
��дһ���˵��������򡣸ó�����ʾһ���ṩ4��ѡ��Ĳ˵�����ÿ��ѡ����һ����ĸ��ǡ�
����û�ʹ����Чѡ��֮�����ĸ������Ӧ��������ʾ�û�����һ����Ч����ĸ��ֱ���û�������Ϊֹ��
Ȼ�󣬸ĳ���ʹ��һ��switch��䣬�����û��Ķ�ѡ��ִ��һ���򵥵Ĳ�����
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
