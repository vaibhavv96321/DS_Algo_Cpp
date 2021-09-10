#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    int k,a1[100],c=0;
    cout<<"enter value : ";
    cin>>k;
    for(int i=0;i<b;i++)
    {
        if(a[i]<=k)
        {
            a1[c]=i;
            c++;
        }
    }
    int p,max=INT_MIN,a2[100],d=0;
    for(int j=0;j<c-1;j++)
    {
        p=1;
        if(a1[j]+1==a1[j+1])
        {
            p++;
        }
        else{
            if(max<p)
                max=p;
            a2[d]=p;
            d++;
        }
    }
    int t=0;
    for(int i=0;i<d;i++)
    {
        t=t+a2[i];
    }
    cout<<t-max+1;
}