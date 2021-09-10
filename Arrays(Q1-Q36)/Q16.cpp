#include<iostream>
using namespace std;
int main()
{
    int a[100],b;
    cout<<"enter no. ";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    int p=0;
    int max=a[0];
    for(int i=0;i<b;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]==max)
            {
                int t=a[b-1];
                a[b-1]=a[i];
                a[i]=t;
                p++;
                
            }
            else if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
                p++;
            }
        }
    }
    cout<<"no. of order is "<<p; 
}