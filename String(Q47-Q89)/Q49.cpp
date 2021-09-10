#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch);
    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++){
            if(ch[j]==ch[i]){
                cout<<ch[j];
            }
        }
    }
}