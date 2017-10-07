#include <iostream>
using namespace std;

float func(float c,float a, float b)
{
if(b==1)
return c;
else
{c*=a;
b-=1;
return func(c,a,b);
}	
}

int main() {
	float a,b;
	cout<<"Enter the number and its power";
	cin>>a>>b;
	cout<<"\nThe answer is = "<<func(a,a,b);
	return 0;
}