#include<iostream>
using namespace std;
int main()
{
    int a[3]={2,0,1},i;
    int min = a[0];
    int max=a[0];
    for(i=0;i<3;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int t=min;
    min=a[0];
    a[0]=t;
    t=max;
    max=a[2];
    a[2]=t;
    a[1]=1;
    cout<<a[0]<<a[1]<<a[2];
    return 0;


}