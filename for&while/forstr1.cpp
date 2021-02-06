//forstr1.cpp -- display letters in reverse order
#include <iostream>

int main()
{
    using namespace std;
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    //display letters in reverse order
    for (int i = word.size()-1; i >= 0; i--)
        cout<<word[i];

    return 0;
}
