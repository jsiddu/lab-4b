#include <iostream>
#include <string.h>
using namespace std;
void func(int str[],int m,int a=0)
{if(a>m)
exit(0);
else
{cout<<endl<<a+1<<" element of the array is "<<str[a];
func(str,m,++a);}
}

int main() {
int str[30];
int n;
cout<<"Enter how many numbers you want to save in the array(max 30)";
cin>>n;
cout<<"\nEnter the numbers to store in your array";
for(int i=0;i<n;i++)
cin>>str[i];
func(str,n-1,0);
return 0;
}