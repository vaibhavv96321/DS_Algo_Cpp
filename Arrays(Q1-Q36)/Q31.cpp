#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c[100],t,k,a1[100],s=0;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    cout<<"enter no. : ";
    cin>>k;
    for(int i=0;i<b;i++)
    {
        t=a[i];
        if(t>k)
        {
            cout<<"1";
            abort();
        }
        else {
        for(int j=i+1;j<b;j++)
        {
            t=t+a[j];
            if(t>k)
            {
                a1[s]=j-i+1;
                s++;
            }
        }
        }
    }
    int min=INT_MAX;
    for(int i=0;i<s;i++)
    {
        if(min>a1[i])
        {
            min=a1[i];
        }
    }
    cout<<min;
}