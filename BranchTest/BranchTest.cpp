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
		cout << i << " " << endl;
		CountUp(i, i + 1);
		cout << " ";
		a = i;
	}

	int b = NewNum(a);
	cout << "New Num: " << b << endl;




}


void CountUp(int a, int b) {
	cout << a + b << endl;
}
int NewNum(int a) {
	a = a * 10 + 35;
	return a;
}


