#include<iostream>
#include<string.h>

using namespace std;

class employee1{
	public :
	int name;
	char role[100];
	void setdata(){
		
		cout<<"enter employees name ="<<name<<endl;
		cout<<"enter employees role ="<<role<<endl;
	}
};
class employee2{
	public :
		
	int id;
	int experience;
	
	void showdata(){
		
		cout<<"enter employees id ="<<id<<endl;
		cout<<"enter employees experience ="<<experience<<endl;
	}
};
class employee3 : public employee1 , public employee2{
	
    public :
	char contact[10];
	void printdata(){
		
		cout<<"enter employees contact ="<<contact<<endl;
	}

};







int main(){
	employee3 ee;
	ee.setdata();
	ee.showdata();
	ee.printdata();
	
	return 0;
}
