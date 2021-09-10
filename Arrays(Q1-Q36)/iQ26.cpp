#include<iostream>
using namespace std;
int main()
{
    int a[100],b,p=0;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         cin>>a[i];
    }
    int min=INT_MAX,s,max,min1,max1,s1,t,t1;

    for(int i=0;i<b;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        else
        {
            s=i-1;
            break;
        }
    }
    if(min==a[b-1])
    {
        cout<<"Profit is 0";
        abort();//important point to note (terminate the programe immediatly...)
    }
    else {
    max=INT_MIN;
    for(int i=s+1;i<b;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else
        {
            s1=i-1;
            break;
        }
    }
    if(max==a[b-1])
    {
        s1=b-1;
    }
    if(s1+2<=b-1)
    {
        min1=INT_MAX;
        for(int i=s1+1;i<b;i++)
        {
            if(min1>a[i])
            {
                min1=a[i];
            }
            else
            {
                t=i-1;
                break;
            }
        }
        max1=INT16_MIN;
        if(min1==a[b-1])
        {
            p++;
        }
        else 
        {
            for(int i=t+1;i<b;i++)
            {
                if(max1<a[i])
                {
                    max1=a[i];
                }
            }
        }
    }
    else
    {
        p++;
    }
    }
    int ans;
    max=a[s1];
    min=a[s];
    
    if(p==0)
    {
        min1=a[t];
        ans=max-min+max1-min1;
    }
    else {
        ans=max-min;
    }
    cout<<"profit is : "<<ans;
}

