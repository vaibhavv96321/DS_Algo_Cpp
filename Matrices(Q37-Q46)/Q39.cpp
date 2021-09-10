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
    int s=b*c,p=0;
    int a1[b*c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            a1[p]=a[i][j];
            p++;
        }
    }
    sort(a1,a1+(p));
    float t;
    if((s)%2==0)
    {
        t=a1[(s/2)-1]+a1[s/2];
        cout<<t/2;
    }
    else{
        cout<<a1[((s+1)/2)-1];
        
    }
}