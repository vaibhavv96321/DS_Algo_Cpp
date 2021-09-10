#include<iostream>
using namespace std;
int main()
{
    int a[100],b,a1[100],a2[100],c=0,d=0;
    cout<<"enter no. ";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<b;i++)
    {
        if(a[i]<0)
        {
            a1[c]=a[i];
            c++;
        }
        if(a[i]>0)
        {
            a2[d]=a[i];
            d++;
        }
    }
    int p=(d>c?c:d);
    int s=0,t=0;
    for(int i=0;i<2*(p);i++)
    {
        if(i%2==0)
        {
            a[i]=a1[s];
            s++;
        }
        else{
            a[i]=a2[t];
            t++;
        }
    }
    for(int i=2*p;i<b;i++)
    {
        a[i]=(d>c?a2[t]:a1[s]);
        t++;
        s++;
    }
    for(int j=0;j<b;j++)
    {
        cout<<a[j]<<" ";
    }
}