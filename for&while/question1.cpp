#include<iostream>
#include<cctype>    //һ���ַ��ж�Ԥ����ĺ���

using namespace std;
int main()
{
    char ch;
    while(cin>>ch && ch!= '@')  //����@�����
    {
        if(isalpha(ch)) //������ַ������
        {
            if(isupper(ch)) //��д��ĸ��Сд��Сд��ĸ���д
                ch=tolower(ch);
            else
                ch=toupper(ch);
            cout<<ch;
        }
        else if(isdigit(ch));   //��������������
        else
            cout<<ch;
        cout<<endl;
    }
    return 0;
}
