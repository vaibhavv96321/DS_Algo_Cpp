#include<iostream>
using namespace std;
int main()
{
    int a[100],b,c[100],d,e[200];
    cout<<"enter no. of first array : \n ";
    cin>>b;
    cout<<"enter first array : ";
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    cout<<"enter no. of second array : \n ";
    cin>>d;
    cout<<"enter second array : ";
    for(int i=0;i<d;i++)
    {
         cin>>c[i];
    }
    for(int i=0;i<b+d;i++)
    {
        if(i<b)
        {
            e[i]=a[i];
        }
        else{
            e[i]=c[i-b];
        }
    }
    for(int i=0;i<b+d;i++)
    {
        cout<<e[i]<<" ";
    }
}    