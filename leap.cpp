/*
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 Task C

A program where the user inputs a year and
and returns if it is a leap year or not.
*/
#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter year:";
	cin >> year;
	if (year % 4 != 0){
		cout << "Common year"<<endl;
	}
	else if(year % 100 != 0) {
		cout << "Leap year"<<endl;
	}
	else if(year % 400 != 0) {
		cout << "Common year"<<endl;
	}
	else {
		cout << "Leap year"<<endl;
	}
	return 0;
}