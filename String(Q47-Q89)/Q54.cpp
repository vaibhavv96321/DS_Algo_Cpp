#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    int p=0,q=0;
    cout<<"enter string : ";
    gets(ch);
    int t=strlen(ch);
    for(int i=0;i<t;i++)
    {
        p=0;
        for(int j=i+1;j<t;j++)
        {
            p++;
            if(ch[i]==ch[j]){
                
                for(int k=i;k<j/2;k++){
                    if(ch[k]==ch[p-k]){
                        q++;
                    }
                }
                if(p/2==q){

                    
                }
            }
        }
    }