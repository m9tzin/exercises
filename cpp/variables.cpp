#include <iostream>
using namespace std;

int main (void){
	const int myNumber = 10; // unchangeable value;
	cout << myNumber << endl;
	const float PI = 3.14;
	const float sqrtTwo = 2.41;

	// Student data:
	int ID = 1;
	int age = 26;
	char grade = 'A';

	// Printing data:
	cout << "Student ID: " << ID << endl;
	cout << "Student age: " << age << endl;
	cout << "Student grade: " << grade << endl;

	return 0;
}
