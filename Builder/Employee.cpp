#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char address[100];
	char email[100];
	char contact[10];
	
	
	void setdata(){
		cout<<"enter id =";
		cin>>id;
		cout<<"enter name =";
		cin>>name;
		cout<<"enter role =";
		cin>>role;
		cout<<"enter salary =";
		cin>>salary;
		cout<<"enter experience =";
		cin>>experience;
		cout<<"enter address =";
		cin>>address;
		cout<<"enter email =";
		cin>>email;
		cout<<"enter contact =";
		cin>>contact;
	}
	void getdata(){
		cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter experience ="<<experience<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<email<<endl;
		cout<<"enter contact="<<contact<<endl;
		
		
	}
	
};

int main(){
	Employee em1,em2,em3,em4,em5;
	
	em1.setdata();
	em1.getdata();
	em2.setdata();
	em2.getdata();
	em3.setdata();
	em3.getdata();
	em4.setdata();
	em4.getdata();
	em5.setdata();
	em5.getdata();
	
		
	return 0;
}