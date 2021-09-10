#include<iostream>
using namespace std;
void sarr()//Important menthod 2
{
    int  x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
    int max=INT_MIN,t=0;
 
    for (int i=0;i<x;i++)
    {
        t=t+a[i];
        if(max<t)
        {
            max=t;
        }
 
        if(t<0)
        { 
            t=0;
        }
    }
    cout<<"max. Value is : "<<max;
}
int main()
{
    sarr();
    
}