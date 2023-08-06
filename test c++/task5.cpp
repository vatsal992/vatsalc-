#include<iostream>
#include<string.h>
using namespace std;

class a{
	public :
		
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char comp_name[100];
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
		
	}
	
	
};
class b: public a{
	public :
		
		void setdata(){
			cout<<"enter salary =";
			cin>>salary;
			cout<<"enter experience =";
			cin>>experience;
		}
	
	
};
class c:public b{
	public :
		
		void setdata(){
			cout<<"enter company name =";
			cin>>comp_name;
			cout<<"enter address =";
			cin>>address;
		}
		void getdata(){
			cout<<"enter name ="<<name<<endl;
			cout<<"enter role ="<<role<<endl;
			cout<<"enter salary ="<<salary<<endl;
		}
};
class d : public c{
		public:
	
	void setdata(){
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
		cout<<"enter company name ="<<comp_name<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter email ="<<email<<endl;
		cout<<"enter contact ="<<contact<<endl;
	}
	
};

int main(){
	class d D;
	D.getdata();
	D.setdata();
	
	
	
	return 0;
	
}
