#include<iostream>
using namespace std;
int main()
{
    int a[100],b,i,j;
    cout<<"enter no.";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];

    }
    int c[100],t=0;
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                c[t]=a[i];
                t++;
                break;
            }
        }
    }
    cout<<"duplicated elements are : ";
    for(i=0;i<t;i++)
    {
        cout<<c[i]<<" ";
    }
return 0;
}