// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float average,a,b,c;
    cout<<"Enter the values of the three numbers:";
    cin>>a>>b>>c;
    average=((a+b+c)/3);
    cout<<"the average of the three number is "<<average;
    return 0;
}