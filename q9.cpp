// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a>b)
    {
        cout<<a <<" is Greater than "<<b;
    }
    else if(a<b){
        cout<<a<<" is less than "<<b;    }
    else{
        cout<<"Both are equal";
    }
    return 0;
}