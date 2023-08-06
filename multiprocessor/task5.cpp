#include<iostream>
#include<string.h>

using namespace std;

class Distance{

	public:
		
		int feet;
		int inches;
		
		void set_distance(){
			
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		
    void get_distance(){
    	
	cout<<"Distance is --> "<<feet;
	cout<<" feet ";
	cout<<""<<inches;
	cout<<" inches "<<endl;
	
	}

	void add(Distance d1, Distance d2){
	
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches;
	feet = feet + (inches / 12);
	inches = inches % 12;
	cout<<endl;
	
	}

};


int main()
{
	Distance d1, d2, d3;

	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	return 0;
}