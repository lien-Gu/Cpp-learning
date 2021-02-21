/**
题目：
编写一个程序，最多将10个donation值输入到一个double数组中。
程序遇到非数字输入时将结束输入，
并报告这些数字的平均值以及数组中有多少个数字大于平均值。
**/

#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<double, 10> arr;
    int num=0;
    double sum=0,aver=0;
    while(num!=10&&cin>>arr[num])
    {
        sum+=arr[num];
        num++;
    }
    aver=sum / num;
    int num_bigger=0;
    cout<<"Average: "<<aver<<endl;
    for(auto it=arr.begin(); it!=arr.end();it++)
            if(*it>aver)
                num_bigger++;
    cout<<"count of number bigger than average:"<<num_bigger<<endl;

    return 0;

}
