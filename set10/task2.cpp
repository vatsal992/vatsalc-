#include<iostream>
#include<string.h>

using namespace std;

int main(){

int a,b,c;

cout<<"Enter Value of A : ";
cin>>a;

cout<<"Enter Value of B : ";
cin>>b;

cout<<endl;

char solution[100]="Can not divide by zero";

try
{	
	if(b==0){		
		throw 22.5;		
	}
	else
	{
		c=a/b;
		cout<<" C = "<<c<<endl;
        cout<<endl;
	}	
}
    catch(...)
	{
	cout<<solution<<endl;
    }

return 0;
}

	
	
