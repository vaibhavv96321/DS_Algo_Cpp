#include<iostream>
using namespace std;
void max_sum_subarray()//Important menthod 1
{
      int  x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        int maxsum=INT_MIN;
        for(int i=0;i<x;i++)
        {
            int sum=0;
            for(int j=i;j<x;j++)
            {
                sum=sum+a[j];
                if(sum>maxsum)
                {
                    maxsum=sum;
                }

            }
        }

        cout<<"max sum is : "<<maxsum;

}
int sarr()//Important menthod 2
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
    max_sum_subarray();
}