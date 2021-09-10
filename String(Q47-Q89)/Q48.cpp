#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch),s=0;
    for(int i=t-1;i>=0;i--){
        if(ch[s]==ch[i])
        {
            s++;
        }
    }
    if(s==t)
    {
        cout<<"pallendrom";
    }
    else{
        cout<<"not pallendrom";
    }
}