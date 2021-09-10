#include<iostream>
using namespace std;
int main()
{
    long double t=1,b;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        t=t*(b-i);
    }
    cout<<"output : "<<t;
}