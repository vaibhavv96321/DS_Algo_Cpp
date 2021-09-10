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
    int k,p=0;
    cout<<"enter number";
    cin>>k;
    for(int s=0;s<b;s++)
    {
        for(j=0;j<c;j++)
        {
            if(k==a[s][j])
            {
                cout<<"found this element at ["<<s<<"]["<<j<< "] place.\n";
                p++;
            }
        }
    }
    if(p==0)
    {
        cout<<"not found";
    }
}