#include <iostream>
using namespace std;

void func(int n,int a=1)
{if(a==n)
cout<<"\n"<<n;
else
{cout<<"\n"<<a;
func(n,a+1);	
}
}

int main() {
	int n;
	cout<<"Enter a number";
	cin>>n;
	func(n);
	return 0;
}