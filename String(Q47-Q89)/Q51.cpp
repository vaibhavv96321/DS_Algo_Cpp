#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100],ar[100];
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch);
    cout<<"enter another string : ";
    gets(ar);
    int s=strlen(ar);
    if(s!=t){
        cout<<"not rotation ";
        return 0;
    }
    int p=0;
    for(int i=0;i<s;i++)
    {   
        if(ch[0]==ar[i]){
            p=i;
        }   
    }
    int q=0;
    for(int i=0;i<t;i++){
        if(ch[i]==ar[i+p])
        {
            q++;
            if(i+p==t-1)
                p=-i-1;
        }
    }
    if(q==t)
    {
        cout<<"rotation";
    }
    else{
        cout<<"not rotation";
    }
}