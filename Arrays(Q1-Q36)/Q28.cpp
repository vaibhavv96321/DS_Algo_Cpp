#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c[100];
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    int t;
    cout<<"enter no. to be searched";
    cin>>t;
    int p=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            for(int k=j+1;k<b;k++)
            {
                if(a[i]+a[j]+a[k]==t)
                {
                    p++;
                }
            }
        }
    }
    cout<<"no. of elememts are : "<<p;
}