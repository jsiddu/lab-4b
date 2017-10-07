#include <iostream>
using namespace std;

void func(int n,int a,int prod)
{
if(a==n)
{prod*=n;
cout<<"\nFactorial = "<<prod;}
else
{prod*=a;
func(n,a+1,prod);}
}

int main() {
	int n,a=1,prod=1;
	cout<<"Enter a number";
	cin>>n;
	if(n==0)
	cout<<"\nFactorial = 1";
	else
	func(n,a,prod);
	return 0;
}