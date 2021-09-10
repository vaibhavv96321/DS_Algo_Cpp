#include<iostream>
using namespace std;
int main()
{
    int a[100],b,i,t=0,m=INT_MIN,c=0;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            t=i;
        }
     }
     m=INT_MIN;
     for(i=0;i<=t;i++)
     {
         if(m<a[i])
         {
             m=a[i];
         }
         c=c+(m-a[i]);
     }
    m=INT_MIN;
    for(i=b-1;i>=t;i--)
    {
        if(m<a[i])
        {
            m=a[i];
        }
        c=c+(m-a[i]);
    }
    cout<<"total water is : "<<c;
    
}

    