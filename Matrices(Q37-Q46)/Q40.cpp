#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100][100],b,c;
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
    int max=INT_MIN,p=0,k;
    for(i=0;i<b;i++)
    {
        p=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                p++;
            }
            if(max<p)
            {
                max=p;
                k=i;
            }
        }
    }
    cout<<"rw with max no. of 1's is "<<k+1<<" with a total of "<<max<<" ones" ;
}
        /*10 20 30 40
          15 25 35 45
          27 29 37 48
          32 33 39 50*/