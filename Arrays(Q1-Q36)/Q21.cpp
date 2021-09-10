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
    int p=0;
    for(int i=0;i<b;i++)
    {
        int t=a[i];
        for(int j=i+1;j<b;j++)
        {
            t=a[j]+t;
            if(t==0)
            {
                p++;
                break;
            }
        }
    }
    if(p==0)
    {
        cout<<"N0";
    }
    else {
        cout<<"YES";
    }
}