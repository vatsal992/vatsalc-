#include<iostream>
#include<string.h>

using namespace std;

class mother{
	public :
	void display(){
		cout<<"hi"<<endl;
		
	}
};
class daughter : public mother{
	public :
		char a[100]="bye";
		void display()
		{
			cout<<""<<a<<endl;
		}

		
		
	
};

int main(){
	daughter dg;
	dg.display();
	dg.display();

	return 0;
	
}