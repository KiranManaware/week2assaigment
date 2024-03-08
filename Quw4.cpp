/*  Write a program to find the volume of cylinder*/
#include<iostream>
using namespace std;
int main()
{
    float radii,H,Volume;
    cout<<"Enter the radius : ";
    cin>>radii;
    cout<<"Enter the height : ";
    cin>>H;
    Volume=3.14*radii*radii*H;
    cout<<"volume : "<<Volume;

    return 0;
}