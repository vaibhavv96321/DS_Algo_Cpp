#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[100][100],b,c;
    cout<<"enter row : ";
    cin>>b;
    cout<<"enter col. : ";
    cin>>c;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int a1[b*c],t=0;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            a1[t]=a[i][j];
            t++;
        }
    }
    sort(a1,a1+(b*c));
    int k;
    cout<<"enter value of k in kth smallest element : ";
    cin>>k;
    cout<<"value of "<<k<<"th smallest element : "<<a1[k-1];
}