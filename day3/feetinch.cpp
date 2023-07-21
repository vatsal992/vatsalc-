#include<iostream>
#include<string.h>

using namespace std;
 
class Distance{
    
    public: 
    
	int feet;
    float inch;

};
 
int main()
{
	
 Distance d1, d2, sum;
  
    cout << "Enter First feet : ";
    cin >> d1.feet;
 
    cout << "Enter First inch : ";
    cin >> d1.inch;
    
    cout <<endl;
    
    cout << "Enter second feet : ";
    cin >> d2.feet;
 
    cout << "Enter First feet : ";
    cin >> d2.inch;
 
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
 

    if(sum.inch>12){

    sum.feet++;
	sum.inch = sum.inch - 12;

	} 

    cout << endl;
    cout << "Total distance = " << sum.feet << " feet, " << sum.inch <<" inches";

    return 0;

}