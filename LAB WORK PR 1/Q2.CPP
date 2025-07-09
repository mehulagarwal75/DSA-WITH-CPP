#include <iostream>
using namespace std;

main() 
{
    int num ;
    cout<<"Enter Any Number :";
    cin>>num;

    if(num % 2==0) 
    {
        cout<<endl<<num<<"Is Even Number.....";
    }
    else
    {
         cout<<endl<<num<<"Is Odd Number.....";
    }
    if(num %5==0)
    {
         cout<<endl<<num<<"Is Divisible By 5.....";
    }
    else
    {
         cout<<endl<<num<<"Is Not Divisible By 5.....";
    }
}