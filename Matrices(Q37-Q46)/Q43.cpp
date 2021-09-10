#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100][100],b,c,s,t,s1,t1;
    cout<<"enter row : ";
    cin>>b;
    cout<<"enter col. : ";
    cin>>c;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int max=INT_MIN,min=INT_MAX;
    int a1,b1,c1,d1;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
           for(int k=0;k<b;k++){
               for(int y=0;y<c;y++)
               {
                   if(i>k&&j>y){
                       if(a[i][j]-a[k][y]>max)
                       {
                           max=a[i][j]-a[k][y];
                           a1=i;
                           b1=j;
                           c1=k;
                           d1=y;
                       }
                   }
               }
           }
        }
    }
    cout<<"max value is "<<max<<" which is a["<<a1<<"]["<<b1<<"] - a["<<c1<<"]["<<d1<<"] ";
}