#include<iostream>
using namespace std;
int main()
{
    int a[100],b,a1[100],c;
    cout<<"enter no. of first arr : ";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    cout<<"enter no. of second arr : ";
    cin>>c;
    for(int i=0;i<c;i++)
    {
         cin>>a1[i];
    }
    int p=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(a1[i]==a[j])
            {
                p++;
                break;
            }
        }
    }
    if(p==c)
    {
        cout<<"subarray ";
    }
    else{
        cout<<"not subarray";
    }
}
