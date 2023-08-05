#include<iostream>
#include<string.h>

using namespace std;

class animal{
	public :
		
	char name[100];
	int age;
	
	void setvalue(){
		
		cout<<"enter name ="<<name<<endl;

		cout<<"enter age ="<<age<<endl;
	
		
	}
};

class zebra:public animal{
	public :

	void set(){
		char name[100];
	    int age;
	    char place_of_origin;
		
		cout<<"enter name ="<<endl;
	
		cout<<"enter age ="<<endl;
	
		cout<<"enter place of origin ="<<endl;
	
	}
};
class dolphin:public animal{
	public :

	void get(){
		char name[100];
	    int age;
	    char place_of_origin;
		
		cout<<"enter name ="<<name<<endl;
		
		cout<<"enter age ="<<age<<endl;
	
		cout<<"enter place of origin ="<<place_of_origin<<endl;
	
	}
};
 

int main(){
	
	zebra ze;
	
	ze.set();
	ze.setvalue();
	
	dolphin dd;
	dd.get();
	dd.setvalue();
	
	
	return 0;
}