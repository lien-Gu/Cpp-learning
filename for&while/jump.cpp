//jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
int main()
{
    using namespace std;
    char line[ArSize];
    int space = 0;

    cout<<"Enter a line of text:\n";
    cin.get(line, ArSize);
    cout<<"Complete line:\n"<<line<<endl;
    cout<<"line through first period:\n";
    for(int i = 0; line[i] != '\0';i++)
    {
        cout<<line[i];  //display character
        if(line[i] == '.')  //quit if it's a period
            break;
        if(line[i] != ' ')  //skip rest of loop
            continue;
        space++;
    }
    cout<<endl<<space<<" spaces"<<endl;
    cout<<"Done.\n";

    return 0;
}
