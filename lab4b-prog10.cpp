#include <iostream>
using namespace std;
void func(int n,int m,int a=1,int b=1)
{
	if(n==1)
	cout<<"\nThe "<<m<<" term of the fibonacci series is "<<a;
	else if(n==2)
	cout<<"\nThe "<<m<<" term of the fibonacci series is "<<a;
	else
	{--n;
	int a2 = b+a;
	b=a;
	func(n,m,a2,b);}
	
}

int main() {
int n=1;
cout<<"Enter n";
cin>>n;
func(n,n,1,1);
return 0;
}