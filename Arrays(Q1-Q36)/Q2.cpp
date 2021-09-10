#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int b;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<b;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int min=a[0];
    for(int i=0;i<b;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}