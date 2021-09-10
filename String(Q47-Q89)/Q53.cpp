#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int s[100];
    int k,q,t=2,m=0;
    cout<<"enter no. : ";
    cin>>k;
    int p=0;
    if(k==1)
    {
        cout<<"1";
        abort();
    }
    else if(k==2)
    {
        cout<<"11";
        abort();
    }
    else{
        s[0]=2;s[1]=1;
        m=2;
        for(int i=3;i<k;i++){
            p=0;m=0;
            for(int j=1;j<t;j++){
               if(s[j]==s[j-1]){
                p++;
                q=s[j-1];
                } 
               else{
                   s[m]=p;m++;s[m]=q;m++;
                   p=0;
                   t+=2;
                   if(j==t-1)
                   {
                       s[m]=1;m++;s[m]=s[j];m++;
                   }
                }

            }
            s[m]=p;m++;s[m]=q;m++;
                   p=0;
                   t+=2;
           
        }
        for(int j=0;j<m;j++){
        cout<<s[m];
        }
    }
   
}
    