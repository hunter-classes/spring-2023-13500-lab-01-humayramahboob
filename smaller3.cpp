/*
Author: Humayra Mahboob
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 Task B

A program where the user inputs three integers 
and prints out the smaller of the three.
*/

#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	int z;
	cout<< "Enter the first number:";
	cin>> x;
	cout<< "Enter the second number:";
	cin>> y;
	cout<< "Enter the third number:";
	cin>> z;
	if (x<y){
		if (x<z) {
			cout<< "The smaller of the three is "<<x <<endl;
		}
	}
	if (y<x) {
		if (y<z) {
			cout << "The smaller of the three is " << y << endl;
		}
	}
	if (z<x) {
		if (z<y) {
			cout << "The smllaer of the three is " << z << endl;
		}
	}
	return 0;
}

	
	
	