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
		throw 10;		
	}
	else
	{
		c=a/b;
		cout<<" C = "<<c<<endl;
	}
}
    catch(char[])
	{
	cout<<solution<<endl;
    }
    catch(int)
    {	
    cout<<"Can not divide by zero"<<endl;
    }

return 0;
}

	
	
