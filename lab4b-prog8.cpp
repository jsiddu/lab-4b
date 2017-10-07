#include <iostream>
#include<string.h>
using namespace std;

void func(char str[],int m,int sum)
{if(m==0)
{sum+=str[m]-48;
cout<<"\nSum = "<<sum;}
else
{sum+=str[m]-48;
--m;
func(str,m,sum);}
}

int main() {
char str[20];
cout<<"Enter your number";
cin>>str;
int m=strlen(str),a=0;
func(str,m-1,a);
return 0;
}