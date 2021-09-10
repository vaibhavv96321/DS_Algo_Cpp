#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,a1[100],a2[200],c;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    cout<<"enter another size : ";
    cin>>c;
     for(int i=0;i<c;i++)
    {
         cin>>a1[i];
    }
    for(int i=0;i<b;i++)
    {
        a2[i]=a[i];
    }
    for(int i=b;i<c+b;i++)
    {
        a2[i]=a1[i-b];
    }
    
    int s=b+c;
    sort(a2,a2+s);
    for(int i=0;i<b+c;i++)
    {
        cout<<a2[i]<<" ";
    }
    float t;
    if(s%2==0)
    {
        t=a2[(s/2)-1]+a[(s/2)];
        cout<<t/2;
    }
    else{
        t=a2[((s+1)/2)-1];
        cout<<t;
    }
    
}


