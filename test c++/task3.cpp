#include<iostream>
#include<string.h>
using namespace std;

class hotel{
	public :
	
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	int rating_type;
	char website[100];
	
	
	void setdata(){
		cout<<"enter id =";
		cin>>id;
		cout<<"enter name =";
		cin>>name;
		cout<<"enter type =";
		cin>>type;
		cout<<"enter staff size =";
		cin>>staff_size;
		cout<<"enter room size =";
		cin>>room_size;
		cout<<"enter establish year =";
		cin>>establish_year;
		cout<<"enter address =";
		cin>>address;
		cout<<"enter rating type =";
		cin>>rating_type;
		cout<<"enter website =";
		cin>>website;
	}
	void getdata(){
		
		cout<<"enter id ="<<id<<endl;
		cout<<"enter name ="<<name<<endl;
		cout<<"enter type ="<<type<<endl;
		cout<<"enter staff size ="<<staff_size<<endl;
		cout<<"enter room size ="<<room_size<<endl;
		cout<<"enter establish year ="<<establish_year<<endl;
		cout<<"enter address ="<<address<<endl;
		cout<<"enter rating type ="<<rating_type<<endl;
		cout<<"enter website ="<<website<<endl;
		
	}
	
		
	
};

int main(){
	
	hotel hl;
	hl.setdata();
	hl.getdata();
	
	return 0;
	
}
