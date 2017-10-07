#include <iostream>
using namespace std;
void func(int n,int m,int a)
{
	if((a%n==0)&&(a%m==0))
	cout<<"\nThe LCM of the 2 entered numbers is "<<a;
	else
	{++a;
	func(n,m,a);	
	}
}

int main() {
int n=1,m=1;
cout<<"Enter 2 numbers";
cin>>n>>m;
if(n>m)
func(n,m,n);
else
func(m,n,m);
return 0;
}