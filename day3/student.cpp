#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	public:
	
	int id;
	char name[100];
	int std;
	char school[100];
	int contact;
		
};

int main(){
	
	Student Obj;


    
    Obj.id;
	Obj.name;
	Obj.std;
    Obj.school;	
    Obj.contact;
    
    cout<<"Enter Id : ";
	cin>>Obj.id;
    
    cout<<"Enter Student's name : ";
	cin>>Obj.name;   
    
    cout<<"Enter Student's standard : ";
	cin>>Obj.std;
	
	cout<<"Enter School name : ";
	cin>>Obj.school;
	
	cout<<"Enter Contact : ";
	cin>>Obj.contact;
	
	cout<<endl;
	
	cout<<"Output is"<<endl;
	cout<<endl;
	
    cout<<"student ID = "<<Obj.id<<endl;
    cout<<"student Name = "<<Obj.name<<endl;
    cout<<"student Std = "<<Obj.std<<endl;
    cout<<"student School = "<<Obj.school<<endl;
    cout<<"student's contact details = "<<Obj.contact;	
	
	return 0;
	
}