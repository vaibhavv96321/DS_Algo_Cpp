#include<iostream>
using namespace std;
int main()
{
    int a[100];
    cout<<"enter no.";
    int b,p;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }   
    int min,t;
    for(int i=0;i<b-1;i++)
    {
        min=a[i];
        p=i;
       for(int j=i+1;j<b;j++)
       {
           if(a[j]<min)
           {
               min=a[j];
               p=j;
           }
       }
       t=a[p];
       a[p]=a[i];
       a[i]=t;
    }
return 0;
}    