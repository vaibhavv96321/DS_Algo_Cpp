#include<iostream>
using namespace std;
int main()
{
    int a[100],b;
    int k;
    cout<<"enter no.";
    cin>>b;
    cout<<"Enter no. to be add or substracted";
    cin>>k;
    ;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    
    int max,min;
    max=a[0];
    int p=0,t=0;
    for(int i=0;i<b;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
             p=i;
        }
    }
    min=a[0];
   for(int i=0;i<b;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            t=i; 
        }
    }
    a[p]=a[p]-k;
    a[t]=a[t]+k;
    max=max-k;
    min=min+k;
    for(int i=0;i<b;i++)
    {
        if(i!=p||i!=t)
        {
            a[i]=a[i]+k;
        }
    }
    
    cout<<"minimise height : "<<max-min;
    return 0;
}    