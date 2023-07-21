#include<iostream>
#include<string.h>

using namespace std;

class Room{
	
	public:
	
	char housename[100];
	char address[100];
	char city[100];
	int floors;
};

int main(){
	
	Room rom;
    
    rom.housename;
	rom.address;
	rom.city;
    rom.floor;	
    
    cout<<"Enter name of house : ";
	cin>>rom.housename;
    
    cout<<"Enter address : ";
	cin>>rom.address;   
    
    cout<<"Enter city : ";
	cin>>rom.city;

	cout<<"Enter floor : ";
	cin>>rom.floors;
	
	cout<<endl;
	
	cout<<"Output is"<<endl;
	cout<<endl;
	
	
    cout<<"House name is = "<<rom.housename<<endl;
    cout<<"address of the house is  = "<<rom.address<<endl;
    cout<<"city name = "<<rom.city<<endl;
    cout<<" floor = "<<rom.floors<<endl;

	return 0;
	
}
