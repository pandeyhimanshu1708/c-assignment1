// Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    float r,area,pi;
    pi=3.14;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    area=pi*r*r;
    cout<<"Area of the circle is "<<area;
    return 0;
}