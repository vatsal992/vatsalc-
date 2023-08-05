#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	int exp;
	char company[100];
	char address[100];
	char email[100];
	char contact[10];
	
	void setter(){
			
		cout<<"enter id =";
		cin>>id;
		
		cout<<"enter name =";
		cin>>name;
		
		cout<<"enter job role =";
		cin>>role;
        
		cout<<endl;	
	}
};

class Employee2 : public Employee{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	int exp;
	char company[100];
	char address[100];
	char email[100];
	char contact[10];
	
	void setter(){
			
		cout<<"enter id =";
		cin>>id;
		
		cout<<"enter name =";
		cin>>name;
		
		cout<<"enter job role =";
		cin>>role;

	    cout<<"enter salary =";
	    cin>>salary;
	    
	    cout<<"enter company =";
	    cin>>company;
	    
	    cout<<"contact =";
		cin>>contact;
        
		cout<<endl;
		
	}
	
};

class Employee3 : public Employee2{
	
	public :
	
	int id;
	char name[100];
	char role[100];
	int salary;
	int exp;
	char company[100];
	char address[100];
	char email[100];
	char contact[10];
	
	void setter(){
			
	    cout<<"enter company name =";
		cin>>company;
		
		cout<<"enter address =";
		cin>>address;
        
		cout<<endl;
		
	}
		
	void getter(){
			
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
			
		}
	
};

class Employee4 : public Employee3{
	
	public :
		
	int id;
	char name[100];
	char role[100];
	int salary;
	int exp;
	char company[100];
	char address[100];
	char email[100];
	char contact[10];
		
	void setter(){

		cout<<"enter email =";
		cin>>email;
		
		cout<<"enter contact =";
		cin>>contact;	
		
	}
	
	void getter(){
			
		cout<<"enter id ="<<id<<endl;	
		cout<<"enter name ="<<name<<endl;
		cout<<"enter role ="<<role<<endl;
		cout<<"enter salary ="<<salary<<endl;
		cout<<"enter experience ="<<exp<<endl;
		cout<<"enter company name ="<<company<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<email<<endl;
		cout<<"enter contact ="<<contact<<endl;	
		
		cout<<endl;
	}
};

int main(){
	
	Employee4 e;

    e.Employee::setter();
    e.Employee2::setter();
    e.Employee3::setter();
    e.Employee4::setter();
    
	e.Employee3::getter();
	e.Employee4::getter();
	
	return 0;
	
}