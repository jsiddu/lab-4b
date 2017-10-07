#include <iostream>
#include<string.h>
using namespace std;

void func(char str[],int m)
{if(m==0)
cout<<str[0];
else{
cout<<str[m];
m-=1;
func(str,m);
}
	
}

int main() {
char str[20];
cout<<"Enter your number";
cin>>str;
int m=strlen(str),a=1;
cout<<endl;
func(str,m);
return 0;
}