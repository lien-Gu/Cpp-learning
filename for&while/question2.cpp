/**
��Ŀ��
��дһ��������ཫ10��donationֵ���뵽һ��double�����С�
������������������ʱ���������룬
��������Щ���ֵ�ƽ��ֵ�Լ��������ж��ٸ����ִ���ƽ��ֵ��
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
