#include<iostream>
#include<string.h>

using namespace std;

class methods{
	public :
		
		int x;
		float y;
		char z[100];
		
		void set(){
			cout<<"hi"<<endl;
			
		}
		void set(int x){
			this->x=x;
			cout<<"value of x ="<<x<<endl;
			
			
		}
		void set(int x,float y){
			this->x=x;
			this->y=y;
			cout<<"value of x ="<<x<<endl;
			cout<<"value of y ="<<y<<endl;
			
		}
			void set(int x,float y,char z[]){
			this->x=x;
			this->y=y;
			strcpy(this->z,z);
			cout<<"value of x ="<<x<<endl;
			cout<<"value of y ="<<y<<endl;
			cout<<"value of z ="<<z<<endl;
			
		}
		
};

int main(){
	methods ms;
	ms.set();
	ms.set(22);
	ms.set(21,65.55);
	ms.set(22,11.11,"zhc");
	

	return 0;
}