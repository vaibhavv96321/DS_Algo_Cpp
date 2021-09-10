#include<iostream>
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
    int t=0,s=b-1,p=c-1,q=0;
    for(int k=0;k<100;k++)
    {
        for(i=t;i<c-1-t;i++)
        {
            cout<<a[t][i]<<" ";
            q++;
        }
        if(q==b*c)
        {
            break;
        }
        for(i=t;i<b-t-1;i++)
        {
            cout<<a[i][p]<<" ";
            q++;
        }
        if(q==b*c)
        {
            break;
        }
        for(i=c-1-t;i>0+t;i--)
        {
            cout<<a[s][i]<<" ";
            q++;
        }
        if(q==b*c)
        {
            break;
        }
        for(i=b-1-t;i>0+t;i--)
        {
            cout<<a[i][t]<<" ";
            q++;
        }
        if(q==b*c)
        {
            break;
        }
        t++;
        s--;
        p--;
    }
    if(b%2!=0&&b==c)
    {
        cout<<a[(b-1)/2][(b-1)/2];
    }
}