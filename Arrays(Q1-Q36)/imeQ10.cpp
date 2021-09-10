#include<iostream>
using namespace std;
int main()
{
    int a[100],b,i,j,t=0,s,p=0;
    cout<<"enter no.";
    cin>>b;
    for(i=0;i<b;i++)
    {
         cin>>a[i];
    }
    int q,f;
    if(a[0]<=0)
    {
         cout<<"can't continue the programe . Fault detected";
    }
    else{
    int max;
    i=0;
        while(i<b)
    {
         max=a[i+a[i]];
         if(i+a[i]>=b-1)
         {
              break;
         }
          for(j=i+1;j<=i+a[i];j++)
          {
               if(a[j]>=max)
               {
                    max=a[j];
                    t=j;
               }/*  3 2 1 1 2 3*/
          }
          q=t,f;
          s=(i+a[i])-t;
          for(int z=0;z<s;z++)
          {
               if(max<=a[t]+z)
               { 
                   f=a[t+z];
                   q=t+z;
               }
               if(f==a[t+s])
               {
                    f=a[t+s];
                    q=t+s;
               }
          }
          p++; 
          i=q;   
    }
    cout<<"minimum Jumps are : "<<p+1;
    }
    
}