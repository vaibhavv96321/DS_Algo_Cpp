#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
		int b,a[100];
		cout<<"enter size : ";
		cin>>b;
		for(int i=0;i<b;i++)
		{
			cin>>a[i];
		}
		sort(a,a+b);//direct sorting method with the libraray included which is #include<bits/stdc++.h>
		int k,min=INT_MAX;
		cout<<"enter  student no. : ";
		cin>>k;
		for(int i=0;i+k-1<b;i++)
		{
			int t=a[i+k-1]-a[i];
			if(t<min)
			{
				min=t;
			}
		}
		cout<<min;
}
