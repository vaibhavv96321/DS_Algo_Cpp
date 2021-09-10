#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c[100],k;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    cout<<"enter k : ";
    cin>>k;
    int t=0;
    for(int i=0;i<b;i++)
    {
        if(a[i]>=b/k)
        {
            c[t]=a[i];
            t++;
        }
    }
    for(int i=0;i<t;i++)//for deleting duplicate element...
    {
        for(int j=i+1;j<t;j++)
        {
            if(c[i]==c[j])
            {
                for(int k=j;k<t;k++)
                {
                c[k]=c[k+1];
                }
                j--;
                t--;    
            }
        }
    }//Important
    for(int i=0;i<t;i++)
    {
        cout<<c[i]<<" ";
    }
}