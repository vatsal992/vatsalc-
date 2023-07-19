#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int i;
	char str[100];
	
	cout<<"enter the string ";
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i] <='Z'){
			str[i] =str[i] + 32;
		}
		else if(str[i]>='a' && str[i] <='z'){
			str[i] = str[i] - 32;
			
		}
		cout<<"toggled string :"<<str<<endl;
	}
	
	
	
	return 0;
	
}