#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,a1[100],a2[200];
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
     for(int i=0;i<b;i++)
    {
         cin>>a1[i];
    }
    for(int i=0;i<b;i++)
    {
        a2[i]=a[i];
    }
    for(int i=0;i<b;i++)
    {
        a2[i+b]=a1[i];
    }
    sort(a2,a2+(2*b));
    float t=a2[b-1]+a2[b];
    cout<<t/2;
}


