// BranchTest.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;
void CountUp(int, int);
int NewNum(int);
int main()
{   
	int a = 0;
	cout << "New change" << endl;
	for (int i = 0; i <= 9; i++) {
		cout << i << " "; //added a space
		CountUp(i, i + 1);
		cout << " ";
		a = i;
	}
    
	int b = NewNum(a); //did a new cout
	cout << "New Number is: " << b << endl;






	system("Pause");
}


void CountUp(int a, int b) {
	cout << a + b << endl;
}

int NewNum(int a) {   //inserted new function here
	int x = a * 5 + 10;
	return x;

}


