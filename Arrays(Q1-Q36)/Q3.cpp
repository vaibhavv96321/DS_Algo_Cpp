#include<iostream>
using namespace std;
int main()
{
    int a[100];
    cout<<"enter no.";
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }   
    int c;
    for(int i=0;i<b-1;i++)
    {
        for(int j=0;j<b-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    int d;
    cout<<"enter to position of kth min";
    cin>>d; 
    cout<<a[d-1]; 
    cout<<"enter to position of kth max";  
    cin>>d;
    cout<<a[b-d];
    return 0;
}