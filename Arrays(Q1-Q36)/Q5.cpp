#include<iostream>
using namespace std;
void me1()
{
    int a[100],b,i;
    cout<<"enter no.";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    int c[b],t=0;
    for(i=0;i<b;i++)
    {
        if(a[i]<0)
        {
            c[t]=a[i];
            t++;
        }
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>=0)
        {
            c[t]=a[i];
            t++;
        }
    }
    for(i=0;i<b;i++)
    {
        cout<<c[i]<<"  ";
    }
}
void me2()
{
    int a[100],b,i;
    cout<<"enter no.";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<b;i++)
    {
        for(int j=i;j<b;j++)
        {
            if(a[j]<0)
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    me2();
    return 0;
    
}