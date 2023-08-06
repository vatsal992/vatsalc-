#include<iostream>
using namespace std;

class time{
	
	int hours;
	int minutes;
	int seconds;
	
	void gettime();
	void puttime();
	void addtime();
	
};
void gettime()
{
	cout<<"enter time"<<endl;
	cout<<"hours";
	cin>>hours;
	cout<<"minutes"<<endl;
	cin>>minutes;
	cout<<"seconds"<<endl;
	cin>>seconds;
	
}
void  puttime()
{
	cout<<"time after add";
	cout<<hours <<":"<<minutes<<":"<<seconds<< endl;
	
}
void addtime
{
	this->seconds;
	this->minutes;
	this->hours;
	this->minutes %=60;
	this->seconds %=60;
	
}

int mian(){
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3.addtime();
	t3.puttime();
	return 0;
}
