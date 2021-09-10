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
    int p=0,a1[100],t=0;
    for(j=0;j<c;j++)
    { 
        p=0;
        for(int k=1;k<b;k++)
        {
            for(int l=0;l<c;l++)
            {
                if(a[0][j]==a[k][l])
                {
                    p++;break;
                }
            }   
        }
        if(p==b-1)
        {
            a1[t]=a[0][j];
            t++;
        }
    }
    for(j=0;j<t;j++)
    {
        for(int k=j+1;k<t;k++)
        {
            if(a1[j]==a1[k]){
                for(int l=j+1;l<t;l++)
                {
                    int c=a1[k+1];
                    a1[k+1]=a1[l];
                    a1[l]=c;
                }
                t--;
            }
        }
    }
    for(j=0;j<t;j++)
      cout<<a1[j]<<" ";
}
/*1 1 0 1
  1 1 1 1
  1 1 0 1
  0 1 1 1*/