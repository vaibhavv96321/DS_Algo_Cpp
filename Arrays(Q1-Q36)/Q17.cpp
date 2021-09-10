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
    int m=a[0];
    for(int i=0;i<b;i++)
    {
        if(m>a[i])
        {
            m=a[i];
        }
    }
    int min;
    int max;
    if(a[b-1]==m){
        cout<<"no profit";
    }
    else {
    min=a[0];
    int p=0;
    for(int i=0;i<b-1;b++)
    {
        if(min>a[i])
        {
            min=a[i];
            p=i+1;
        }
    }
    max=a[p];
    for(int i=p;i<b;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        } 
    }}
    cout<<"difference in days are : "<<max-min;
}