#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c[100];
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    for(int i=1;i<b;i++)
    {
        c[i]=a[i-1];
    }
    c[0]=a[b-1];
    for (int i = 0; i < b; i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}