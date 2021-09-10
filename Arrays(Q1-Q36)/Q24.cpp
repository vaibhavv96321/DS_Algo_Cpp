#include<iostream>
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
    int c;
    for(int i=0;i<b-1;i++)
    {
        for(int j=0;j<b-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    int t=1,s=1,p=0,max=INT_MIN;
    for(int i=0;i<b;i++)
    {
        p=0;
        for(int j=0;j<b;j++)
        {
            if(a[i]+t==a[j])
            {
                t++;
                p++;
            }
            if(a[i]-s==a[j])
            {
                s--;
                p++;
            }
        }
        if(max<p)
        {
            max=p;
        }
    }
    cout<<max;
}