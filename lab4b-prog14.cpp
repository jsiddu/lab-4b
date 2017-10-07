#include <iostream>
#include <string.h>
using namespace std;
void func(int str[],int m,int sum,int a=0)
{if(a>m)
cout<<"\nSum of all elements in the array is "<<sum;
else
{sum=sum+str[a];
++a;
func(str,m,sum,a);}
}

int main() {
int str[30];
int n;
cout<<"Enter how many numbers you want to save in the array(max 30)";
cin>>n;
cout<<"\nEnter the numbers to store in your array";
for(int i=0;i<n;i++)
cin>>str[i];
func(str,n-1,0,0);
return 0;
}