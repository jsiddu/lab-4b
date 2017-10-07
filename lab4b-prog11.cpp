#include <iostream>
using namespace std;
void func(int n,int m,int a)
{
	if((n%a==0)&&(m%a==0))
	cout<<"\nThe HCF of the 2 entered numbers is "<<a;
	else
	{--a;
	func(n,m,a);	
	}
}

int main() {
int n=1,m=1;
cout<<"Enter 2 numbers";
cin>>n>>m;
if((n==0)||(m==0))
cout<<"\nNo HCF";
else if(n>m)
func(n,m,m);
else
func(m,n,n);
return 0;
}
