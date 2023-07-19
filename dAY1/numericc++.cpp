#include<iostream>

using namespace std;

int main(){
	
	char mh;
	
	cout<<"enter any value :";
	cin>>mh;
	
	if(mh = 'A' && mh = 'Z'){
		cout<<"entered value is character";
		
	}
	else if(mh = '0' && mh = '9'){
		cout<<"entered value is numeric";
	}
	return 0;
}