#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100],ch1[100],ch2[100];
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch);
    cout<<"Enter another string :";
    gets(ch1);
    int s=strlen(ch1);
    cout<<"enter final string :";
    gets(ch2);
    int u=strlen(ch2);
    if(u!=s+t){
    cout<<"not shuffle";
    abort();
    }
    int p=0,q=0;
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(ch2[i]==ch[j])
            {
                p++;
                break;
            }
        }
        
        for(int k=0;k<s;k++)
        {
            if(ch2[i]==ch1[k])
            {
                q++;
                break;
            }
        }
    }
    int p1=0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(ch[j]==ch1[i]){
                p1++;
            }
        }
    }
    cout<<p+q-2*p1<<endl;
    if(p+q-2*p1==u)
    {
        cout<<"perfect shuffle";
    }
    else{
        cout<<"not shuffle";
    }
}