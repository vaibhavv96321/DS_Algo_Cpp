#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c;
    cout<<"enter given integer : ";
    cin>>c;
    cout<<"enter no. ";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    int p=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]+a[j]==c)
            {
                p++;
            }
        }
    }
    cout<<"total are : "<<p;
    return 0;
}