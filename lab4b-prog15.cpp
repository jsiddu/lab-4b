#include <iostream>
#include <string.h>
using namespace std;
void func(int str[],int m,int min,int max, int a=0)
{if(a>m){
cout<<"\nThe element of maximum value in the array of elements is "<<max;
cout<<"\nThe element of minimum value in the array of elements is "<<min;}

else
{if(min>str[a])
min=str[a];
if(max<str[a])
max=str[a];
++a;
func(str,m,min,max,a);
}
}

int main() {
int str[30];
int n;
cout<<"Enter how many numbers you want to save in the array(max 30)";
cin>>n;
cout<<"\nEnter the numbers to store in your array";
for(int i=0;i<n;i++)
cin>>str[i];
int min=str[0];
int max=str[0];
func(str,n-1,min,max,0);
return 0;
}