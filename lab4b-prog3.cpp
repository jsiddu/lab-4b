#include <iostream>
using namespace std;

void func_even(int n,int a)
{
if(a>n)
exit(0);
else
{cout<<"\n"<<a;
func_even(n,a+2);	
}
}

void func_odd(int n,int a)
{
if(a>n)
exit(0);
else
{cout<<"\n"<<a;
func_odd(n,a+2);	
}
}

int main() {
	int l,n,m;
	cout<<"Enter two numbers";
	cin>>n>>m;
	if(m>n)
	{l=n;
	n=m;
	m=l;}
	int ev;
	cout<<"\nIf you want to print the odd numbers, enter 1, else enter 2";
	cin>>ev;
	if(ev==1)
	{if(m%2==0)
	m+=1;
	func_odd(n,m);}
	else{
	if(m%2!=0)
	m+=1;	
	func_even(n,m);}
	return 0;
}