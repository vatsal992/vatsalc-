#include<iostream>
#include<string.h>

using namespace std;

class india{
	
	static char states[100];
	char drystates[100];
	char wetstates[100];
	char rainfallstates[100];
	char hotstates[100];
	public :
	
	void setdata(){
		cout<<"enter drystates name =";
		cin>>drystates;
		cout<<"enter wetstates name =";
		cin>>wetstates;
		cout<<"enter rainfallstates name =";
		cin>>rainfallstates;
		cout<<"enter hotstates names =";
		cin>>hotstates;
		
		
	}
	void getdata(){
		cout<<"enter states"<<states<<endl;
		cout<<"enter drystates name ="<<drystates<<endl;
		cout<<"enter wetstates name ="<<wetstates<<endl;
		cout<<"enter rainfallstates name ="<<rainfallstates<<endl;
		cout<<"enter hotstates name ="<<hotstates<<endl;
	}
};
char india::states[100]="=29";

int main(){
	india ii;
	
	ii.setdata();
	ii.getdata();
	
	return 0;
	
}