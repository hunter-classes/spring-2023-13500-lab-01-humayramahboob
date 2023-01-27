/*
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 Task D

A program where the user inputs a month and
and returns the number of days in the month considering leap years.
*/
#include <iostream>
using namespace std;

string leap(int year) {
	string a;
	string b;
	a= "Common year";
	b= "Leap year";
	if (year % 4 != 0){
		return a;
	}
	else if(year % 100 != 0) {
		return b;
	}
	else if(year % 400 != 0) {
		return a;
	}
	else {
		return b;
	}
}

int main(){
	int month;
	int year;
	cout << "Enter year:";
	cin >> year;
	cout << "Enter month:";
	cin >> month;
	if (month == 2){
		if (leap(year)=="Common year"){
			cout << "28 days";
		}
		else if (leap(year)=="Leap year") {
			cout << "29 days";
		}
	}
	else if (month== 4 ||month == 6 || month == 9 ||month == 11) {
		cout << "30 days";
	}
	else {
		cout << "31 days";
	}
	return 0;
}
		
		