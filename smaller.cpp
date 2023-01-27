/*
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 Section A

A program where the user inputs two integers 
and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout << "Enter the first number:";
	cin >> a;
	cout << "Enter the second number:";
	cin >> b;
	if (a > b) {
		cout << "The smaller of the two is " << b;
	}
	if (b > a) {
		cout << "The smaller of the two is " << a;
	}
	return 0;
}

