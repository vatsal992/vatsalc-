#include<iostream>
#include<string.h>
using namespace std;

class developer{
	public :
	
	int x;
	char y[100];
	float z;
	void set(){
		
		cout<<"hello"<<endl;
		
	}
	void setdata(int x){
	
		cout<<"value of x ="<<x<<endl;
		
		this->x=x;
	
	}
	void get(int x,char y[100]){

		cout<<"value of x ="<<x<<endl;
		cout<<"value of y ="<<y<<endl;
		cout<<endl;
		
		this->x=x;
		this->y[100]=y[100];
		
	}
	void getdata(int x,char y[100],float z){
	
		cout<<"value of x ="<<x<<endl;
		cout<<"value of y ="<<y<<endl;
		cout<<"value of z ="<<z<<endl;
		cout<<endl;
	}
	
	
};

int main(){
	developer d;
	d.getdata(20,"wow",10.11);
	d.get(22,"exam");
	d.setdata(66);
	d.set();
	
	
	return 0;
	
}

