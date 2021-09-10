#include<iostream>
using namespace std;
int main()
{
    int i,j,b,c;
    cout<<"enter row : ";
    cin>>b;
    cout<<"enter col. : ";
    cin>>c;
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=b-1;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }
    }
}