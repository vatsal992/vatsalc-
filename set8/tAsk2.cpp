#include<iostream>
#include<string.h>

using namespace std;

class set{
	
	public :
		
		void get(){
			
			cout<<"hi"<<endl;
			
		}
	
};

class set2 : public get2{
	
	public :
		
		void getdata(){
			
			cout<<"bye "<<endl;
			
		}
	
};


int main(){
	
	set2 u1;
	
	u1. set :: getdata();
	u1.getdata();
	
	return 0;
	
}