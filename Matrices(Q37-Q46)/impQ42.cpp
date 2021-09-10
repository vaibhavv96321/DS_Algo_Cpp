#include<iostream>
using namespace std;
int main()
{
    int i,j,b,c,p=0;
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
    int ar[c],min=INT_MAX,max=INT_MIN,s=0;
    for(i=0;i<c;i++)
    {
        ar[i]=0;
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0){
                ar[j]=a[i][j]+ar[j];
            }
            else{
                ar[j]=0;
            }
        }
        for(j=0;j<c;j++)
        {
            cout<<ar[j]<<" ";
        }
        cout<<endl;
        p=0;
        int m=0,q=0,s=0,k,min=INT_MAX;
        for(k=0;k<c;k++)/* so i have added only column wise and whenever 0 comes it will become 0 and 
                        i have to find the minimum element in continousion and multiply that element 
                        the the no of elemenet in continuation */
        {
            if(ar[k]!=0)
            {
                s++;
                if(s==1)
                {
                    m=k;
                }
            }
            else{
                
                for(int n=m;n<k;n++)
                {
                    if(ar[n]<min)
                    min=ar[n];
                }
                q=min*s;
                s=0;
            }
        if(max<q)
            max=q;
        }
        for(int n=m;n<k;n++)
                {
                    if(ar[n]<min)
                    min=ar[n];
                }
                q=min*s;
                if(max<q)
                    max=q;
    }
    cout<<max;
}

