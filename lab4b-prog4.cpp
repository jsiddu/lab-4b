#include <iostream>
using namespace std;

void func(int n,int a,int sum)
{
if(a==n)
{sum+=n;
cout<<"\nSum = "<<sum;}
else
{sum+=a;
func(n,a+1,sum);}
}

int main() {
	int n,a=1,sum=0;
	cout<<"Enter a number";
	cin>>n;
	func(n,a,sum);
	return 0;
}