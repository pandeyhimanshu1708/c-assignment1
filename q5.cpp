// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int volume,w,h,l;
    cout<<"Enter the width,height,length of the cuboid:";
    cin>>w>>h>>l;
    volume=w*h*l;
    cout<<"Volume of the cuboid is " <<volume;
    return 0;
}