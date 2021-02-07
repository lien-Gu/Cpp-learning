//sumafile.cpp -- functions with an array argument
#include<iostream>
#include<fstream>   //file I/O support
#include<cstdlib>   //support for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;    //object for handing file input
    cout<<"Enter name of data file:";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if( !inFile.is_open())  //fail to open file
    {
        cout<<"Could not open the file "<<filename<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);

    }
    double value;
    double sum = 0.0;
    int count_num = 0;  //number of items read

    inFile>>value;  //get first value
    while(inFile)    //while input good and not EOF
    {
        ++count_num;    //one more item read
        sum += value;   //calculate running total
        inFile>>value;  //get next value
    }
    if(inFile.eof())
        cout<<"End of file reached."<<endl;
    else if(inFile.fail())
        cout<<"Input terminated by data mismatch"<<endl;
    else
        cout<<"Input terminated for unknown reason."<<endl;
    if(count_num == 0)
        cout<<"No data processed."<<endl;
    else
    {
        cout<<"Items read:"<<count_num<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<sum / count_num<<endl;
    }
    inFile.close();

    return 0;
}
