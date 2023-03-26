#include <iostream>
using namespace std;

class Time{
public:
	int hours;
	int minutes;

	Time(int hours, int minutes){
		this->hours = hours;
		this->minutes = minutes;
	}
};


Time* addTime(Time t1, Time t2){
	int hours = t1.hours + t2.hours;
	int minutes = t1.minutes + t2.minutes;

	Time* t3 = new Time(hours, minutes); 

	return t3;
}

int main(){
	cout << "Name : Archit Jain" << endl;
	cout << "Roll No : 72- CseB-21" << endl;

	cout << "First Time is : " << 3 << " hours " << 2 << " minutes." << endl;
	cout << "Second Time is: " << 10 << " hours " << 5 << " minutes."  << endl;
 
	Time t1(3,2) , t2(10,5);

	Time* ans = addTime(t1,t2);

	cout << "Time after add is : " << ans->hours << " hours and " << ans->minutes << " minutes." << endl;

	return 0;
}