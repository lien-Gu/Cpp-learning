//addpntrs.cpp -- using the new operator for arrays
#include<iostream>

int main()
{
    using namespace std;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;
    pw = pw + 1;
    cout<<"Add one to the pw pointer"<<endl;
    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl<<endl;
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<endl;
    ps = ps + 1;
    cout<<"Add one to the pw pointer"<<endl;
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<endl<<endl;

    cout<<"Access two elements with array notation."<<endl;
    cout<<"stacks[0] = "<<stacks[0]
        <<", stacks[1] = "<<stacks[1]<<endl;
    cout<<"Access two elements with pointer notation."<<endl;
    cout<<"*stacks = "<<*stacks
        <<", *(stacks + 1)= "<<*(stacks + 1)<<endl;

    cout<<sizeof(wages)<<" = size of wages array\n";
    cout<<sizeof(pw)<<" = size of pw pointer\n";
    return 0;
}
