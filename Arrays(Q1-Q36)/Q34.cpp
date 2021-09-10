#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,c,res=0;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<b;i++)
    {
        int d=a[i];
        res=0;
        while(a[i]>0)
        {
            c=a[i]%10;
            res=(res*10)+c;
            a[i]=a[i]/10;
        }
        if(d==res)
        {
            continue;
        }
        else{
            cout<<"0";
            abort();
        }
    }
    cout<<"1";
}