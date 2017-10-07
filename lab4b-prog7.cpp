#include <iostream>
#include<string.h>
using namespace std;

int func(char str[],int m,int a=0)
{if(str[m]!=str[a])
return 0;
else if (str[m]==str[a]){
if(m==a)
return 1;
else if ((m-a==1)&&str[m]==str[a])
return 1;
else
{m-=1;
a+=1;
func(str,m,a);}
}
	
}

int main() {
char str[20];
cout<<"Enter your number";
cin>>str;
int m=strlen(str),a=0;
int out=func(str,m-1,a);
if(out==0)
cout<<"\nThe entered number is not a palindrome";
else if(out==1)
cout<<"\nThe entered number is a palindrome";
return 0;
}