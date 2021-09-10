#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
		int b,a[100];
		cout<<"enter size";
		cin>>b;
		for(int i=0;i<b;i++)
		{
			cin>>a[i];
		}
		sort(a,a+b);//direct sorting method with the libraray included which is #include<bits/stdc++.h>
		for(int i=0;i<b;i++)
		{
			cout<<a[i];
		}
}
