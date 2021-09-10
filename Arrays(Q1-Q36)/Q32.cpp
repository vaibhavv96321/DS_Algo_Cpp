#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,a1[100],a2[100],a3[100],c=0,d=0,e=0;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    int p,q;
    cout<<"enter no. : ";
    cin>>p>>q;
    for(int i=0;i<b;i++)
    {
        if(a[i]<p)
        {
            a1[c]=a[i];
            c++;
        }
        else if(a[i]>p&&a[i]<q){
            a2[d]=a[i];
            d++;
        }
        else if(a[i]>q){
            a3[e]=a[i];
            e++;
        }
    }
    for(int i=0;i<c;i++)
    {
        a[i]=a1[i];
    }
    for(int i=c;i<c+d;i++)
    {
        a[i]=a2[i-c];//{2 5 87 56 12 4 9 23 76 1 45
    }
    for(int i=c+d;i<c+d+e;i++)
    {
        a[i]=a3[i-c-d];
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<endl;
    }
}

