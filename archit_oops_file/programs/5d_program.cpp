#include <iostream>
using namespace std;

class Student{
public:
	int roll_no;
	string name;
	static int count;

	Student(){
		count++;
		this->roll_no = count;
	}
};

int Student::count = 0;


int main(){
	cout << "Name : Archit Jain" << endl;
	cout << "Roll No : 72- CseB-21" << endl;

	int n;
	cout << "enter no of students: " << endl;
	cin >> n;

    Student* s = new Student[n];
    
    cout << "enter name of each student below according to roll no:  \n";
    for (int i = 0 ;i < n ; i++){
        cin >> s[i].name;
    }
    
    cout << "data of students are: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout << "Roll no : " << s[i].roll_no << endl;
        cout << "name : " << s[i].name << endl;
    }
    
	return 0;
}
