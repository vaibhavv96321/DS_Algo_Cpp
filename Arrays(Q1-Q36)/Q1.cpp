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
    for(int i=0,j=b-1;i<b,j>=0;i++,j--)
    {
         c[j]=a[i];
    }
    for(int i=0;i<b;i++)
    {
        cout<<c[i];
    }
    return 0;
}