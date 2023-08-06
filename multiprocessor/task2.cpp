#include<iostream>
#include<string.h>

using namespace std;

class method{
	
	public :
		
		int a;
		float b;
		char c[100];
		
		void set(){
			cout<<"Good Morning"<<endl;
			cout<<endl;
			
		}
		void set(int a){
			this->a=a;
			cout<<"value of a ="<<a<<endl;
			
			
		}
		void set(int a,float b){
			this->a=a;
			this->b=b;
			cout<<"value of a ="<<a<<endl;
			cout<<"value of b ="<<b<<endl;
			
			cout<<endl;
			
		}
			void set(int a,float b,char c[]){
			this->a=a;
			this->b=b;
			strcpy(this->c,c);
			cout<<"value of a ="<<a<<endl;
			cout<<"value of b ="<<b<<endl;
			cout<<"value of c ="<<c<<endl;
			
			cout<<endl;
			
		}
		
};

int main(){
	
	method m;
	
	m.set();
	m.set(2119);
	m.set(326,12.26);
	m.set(33,13.56,"hi");
	
	return 0;
}