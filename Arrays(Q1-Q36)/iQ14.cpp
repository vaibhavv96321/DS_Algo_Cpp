#include<iostream>
using namespace std;
int main()//with hit and trial lol!!!
{
    int a[100][2],b,c[100][2],i,j;
    cout<<"enter no.";
    cin>>b;
    for(int i=0;i<b;i++)
    {
         for(int j=0;j<2;j++)
         {
             cin>>a[i][j];
         }
    }
    int t=0,s=0;
    
    for(i=0;i<b-1;i++)
    {
        c[s][0]=a[t][0];
        c[s][1]=a[i+1][1];
        if(a[0][1]<=a[1][0])
        {
            c[0][1]=a[0][1];
            if(i<1)
            {
                s++;
                t=i+1;
            }
        }
            if(a[i+1][1]>=a[i+2][0])
            {
               continue; 
            }
            else{
                s++;
                t=i+2;
            }
    }
    cout<<"merged arrays are : ";
    for(i=0;i<s;i++)
    {
        cout<<"( "<<c[i][0]<<" , "<<c[i][1]<<" )"<<endl;
    }
     
}    