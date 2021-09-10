#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch);
    for(int i=t-1;i>=0;i--){
        cout<<ch[i];
    }
}