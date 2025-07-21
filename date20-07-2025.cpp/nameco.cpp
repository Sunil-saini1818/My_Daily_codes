//maximum of two numbers

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a and b";
    cin>>a;
    cin>>b;
    if(a>b)
    {
        cout<<"The greater number is ";
        cout<<a;
    }
    else
    {
        cout<<"The greater number is :";
        cout<<b;
    }
    
    return 0;

}