#include <iostream>
using namespace std;

void func_even(int n,int a,int sum=0)
{
if(a>n)
cout<<"\nSum of even numbers = "<<sum;
else
{sum+=a;
func_even(n,a+2,sum);	
}
}

void func_odd(int n,int a,int sum=0)
{
if(a>n)
cout<<"\nSum of odd numbers = "<<sum;
else
{sum+=a;
func_odd(n,a+2,sum);	
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
	cout<<"\nIf you want the sum of odd numbers, enter 1, else enter 2";
	cin>>ev;
	if(ev==1)
	{if(m%2==0)
		{m+=1;
		 func_odd(n,m);
		}
	 else
		func_odd(n,m);
	
	}
	else if(ev==2)
	{if(m%2==0)
		func_even(n,m);
	 else
		{m+=1;
		 func_even(n,m);
		}
	}
/*	else
	cout<<"\nPlease enter either 1 or 0";*/
	return 0;
}