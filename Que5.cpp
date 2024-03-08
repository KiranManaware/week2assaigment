//Find the diff bet ASCII of two character ,take them as input
#include<iostream>
using namespace std;
int main()
{
    char ch1,ch2;
    cout<<"Enter charecter 1 : ";
    cin>>ch1;
    cout<<"Enter charecter 2 : ";
    cin>>ch2;
    // cout<<(int)ch1<<" "<<(int)ch2<<endl;
    // cout<<"Diffrence : "<<(int)ch1-(int)ch2;
    cout<<ch1-ch2;
    
    return 0;
}