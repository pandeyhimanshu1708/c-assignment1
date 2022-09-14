// Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    temp=b;
    b=a;
    a=temp;
    cout<<"Swapping of the two number are "<<a<<"\n"<<b;
    
    return 0;
}
