#include <iostream>
using namespace std;

class Student{
public:
	int roll_no;
	string name;
	static int count;

	Student(string name){
		this->name = name;
		count++;
		this->roll_no = count;
	}
};

int Student::count = 0;


int main(){
	cout << "Name : Archit Jain" << endl;
	cout << "Roll No : 72- CseB-21" << endl;

	Student s1("archit");
	Student s2("aman");


	cout << "data of student 1 is : \n" << s1.roll_no <<  " " << s1.name << endl;
	cout << "data of student 2 is : \n" << s2.roll_no <<  " " << s2.name << endl;

	cout << "count of students is : " << Student::count << endl;



	return 0;
}