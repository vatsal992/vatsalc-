#include<iostream>
#include<stdio.h>

using namespace std;

class hotel{
	public :
	
	int id;
	char name[100];
	char type[100];
	int staffsize;
	int roomsize;
	int establishyear;
	char address[100];
	int rating;
	char website[100];
	

	
	    void setdata(int id,char name[100],char type[100],int staffsize,int roomsize,int establishyear,char address[100],int rating,char website[100]){
	    	
	    	
	    
	    	this->id;
	    	strcpy(this->name,name);
	    	strcpy(this->type,type);
	    	this->staffsize;
	    	this->roomsize;
	    	this->establishyear;
	    	strcpy(this->address,address);
	    	this->rating;
	    	strcpy(this->website,website);
	    	
	    	
		}	
	
		void getdata(){
			cout<<"staff id = "<<id<<endl;
			cout<<"staff name = "<<name<<endl;
			cout<<"type = "<<type<<endl;
			cout<<"staffsize = "<<staffsize<<endl;
			cout<<"roomsize = "<<roomsize<<endl;
			cout<<"established year = "<<establishyear<<endl;
			cout<<"address = "<<address<<endl;
			cout<<"rating = "<<rating<<endl;
			cout<<"webside = "<<website<<endl;
			
		}
	
	
	
};

int main(){
	
	hotel hl;
	hl.setdata(121,"harsh","maneger",200,100,1999,"vesu",4,"theboho.com");
	hl.getdata();
	
	
	return 0;
	
}