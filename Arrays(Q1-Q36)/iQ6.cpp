#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],i,c,d;
    cout<<"enter first array no.  ";
    cin>>c;
    cout<<"enter second array no.  ";
    cin>>d;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    int p[100],q[100],s=0,t=0;
    for ( i = 0; i < c; i++)
    {
        for(int j=0;j<d;j++)
        {
            if(a[i]==b[j])
            {
                p[t]=a[i];
                t++;
            }
        }
    }
    int g=c+d;
    for ( i = 0; i <g; i++)
    {
        if(i<c)
        {
        q[i]=a[i];
        }
        else if(i>=c)
        {
            q[i]=b[s];
            s++;
        }
    }
    int f[100],m=0;
    int h=g-t;
    for(i=0;i<g;i++)
    {
        if(i<c)
        {
            if(q[i]!=p[i])
            {
                f[m]=q[i];
                m++;
            }
        }
        else{
             f[m]=q[i];
             m++;   
        }    
    }
    int k[100],n=0;
    for(i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(p[i]==p[j])
            {
                k[n]=p[i]; 
                n++;
            }
        }
    }
    int w[100],v=0;
    for(i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(p[i]!=k[j])
        {
            w[v]=p[i];
            v++;
        }
        }
    }
    int j;
     cout<<"Intersection is : ";
    for(i=0,j=0;i<t-2*n,j<n;i++,j++)
    {
        cout<<w[i]<<" "<<k[j]<<" ";
    }
    cout<<"union is : ";
    for(i=0;i<m;i++)
    {
        cout<<f[i]<<" ";
    }
    return 0;
}