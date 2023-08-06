#include<iostream>
#include<string.h>

using namespace std;

class points{
	
	public :
		
		int x;
		
		void set(int x){
			
			this->x = x;
			
		}
	
	    void print(){
	    	
	    	cout<<"x = "<< x << endl;
	    	cout<<endl;
	    	
		}
	
	    points operator ++(int){
	    	
	    	points temp;
	    	temp.x = this-> x++;
	    	cout<<"X++";
	    	cout<<endl;
			return temp;
	    	
	    	
		}
	    points operator --(int){
	    	
	    	points temp;
	    	temp.x = this-> x--;
	    	cout<<"X--";
	    	cout<<endl;
	    	return temp;
	    	
		}		
		
};

int main(){
	
	points p1,p2,p3;
	
	p1.set(12);
	p1.print();
	
	p1++;
	p1.print();
	
    p1--;
	p1.print();
	
	return 0;
}