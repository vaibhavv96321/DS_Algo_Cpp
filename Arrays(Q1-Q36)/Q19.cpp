#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c,d,a1[100],a2[100];
    cout<<"enter no. ";
    cin>>b;
    cin>>c;
    cin>>d;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<c;i++)
    {
        cin>>a1[i];
    }
     for(int i=0;i<d;i++)
    {
        cin>>a2[i];
    }
    int a3[100],t=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<d;k++)
            {
                if(a[i]==a1[j])
                {
                    if(a[i]==a2[k])
                    {
                        a3[t]=a[i];
                        t++;
                    }
                }
            }
        }
    }
    cout<<"copied arrays are : ";
    for(int i=0;i<t;i++)
    {
        cout<<a3[i]<<" ";
    }
}
