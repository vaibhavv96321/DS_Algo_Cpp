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
    int a1[b*c],p=0;
    for (i=0;i<b;i++)
    {
       for(j=0;j<c;j++)
       {
           a1[p]=a[i][j];
           p++;
       }
    }
    sort(a1,a1+(b*c));
    /*
    for(i=0;i<b-1;i++)
    {
        for(int q=0;q<c-1;q++)
        {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>=a[i+1][q])
            {
                int c=a[i][j];
                a[i][j]=a[i+1][q];
                a[i+1][q]=c;
            }
        }
        }
    }
    for(i=0;i<b;i++)
    {
        int t;
        for(int k=0;k<c;k++)
        {
            if(a[i][t]>=a[i][k])
            {
                int c=a[i][t];
                a[i][t]=a[i][k];
                a[i][k]=c;
                t=k;
            }
        }
    }*/
    for(i=0;i<b*c;i++)
    {
        cout<<a1[i]<<" ";
    }
}
