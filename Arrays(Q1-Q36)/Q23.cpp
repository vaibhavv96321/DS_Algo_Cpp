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
    int max=INT_MIN;
    for(int i=0;i<b;i++)
    {
        int t=a[i];
        for(int j=i+1;j<b;j++)
        {
            t=a[j]*t;
            if(max<t)
            {
                max=t;
            }
        }
    }
    cout<<"max. product is : "<<max;
}