/**
读取键盘输入，直到遇到@符号为止，并且会先输入(数字除外)，同时将大写字符转换为小写，将小写字符转换为大写。
**/

#include<iostream>
#include<cctype>    //一个字符判断预处理的函数

using namespace std;
int main()
{
    char ch;
    while(cin>>ch && ch!= '@')  //遇到@则结束
    {
        if(isalpha(ch)) //如果是字符则输出
        {
            if(isupper(ch)) //大写字母变小写，小写字母变大写
                ch=tolower(ch);
            else
                ch=toupper(ch);
            cout<<ch;
        }
        else if(isdigit(ch));   //如果是数字则不输出
        else
            cout<<ch;
        cout<<endl;
    }
    return 0;
}
