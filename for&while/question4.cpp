//p200

#include<iostream>
using namespace std;
const int strsize=20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference; //0= fullname, 1=title; 2=bopname
};
int main()
{
    bop p[5]=
    {
        {"Li ming","The man","LM",1},
        {"Xiao hua","The girl","XH",0},
        {"A Ben","The tallist","AB",2},
        {"Xiao fang","The smart","XF",2},
        {"Mei Mei","The wealth","MM",0}
    };

    cout<<"benevolent Order of Programmers Report"<<endl;
    cout<<"a.display by name          b.display by title"<<endl;
    cout<<"c.display by bopname       d.display by preference"<<endl;
    cout<<"q.quit"<<endl;
    cout<<"Enter your choice:";
    char ch;
    cin>>ch;
    while(ch!='q')
    {
        switch (ch)
        {
        case 'a':
            for(int i=0; i<5; i++)cout<<p[i].fullname<<endl;
            break;
        case 'b':
            for(int i=0; i<5; i++)cout<<p[i].title<<endl;
            break;
        case 'c':
            for(int i=0; i<5; i++)cout<<p[i].bopname<<endl;
            break;
        case 'd':
            for(int i=0;i<5;i++)
            {
                switch(p[i].preference)
                {
                case 0:cout<<p[i].fullname<<endl;break;
                case 1:cout<<p[i].title<<endl;break;
                case 2:cout<<p[i].bopname<<endl;break;

                }
            }
        }
        cout<<"Next choice:";
        cin>>ch;
    }

    cout<<"Bye!";
    return 0;
}
