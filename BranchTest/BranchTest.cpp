// BranchTest.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;
void CountUp(int, int);
int main()
{
	cout << "New change" << endl;
	for (int i = 0; i <= 9; i++) {
		cout << i << endl;
		CountUp(i, i + 1);
	}




}


void CountUp(int a, int b) {
	cout << a + b << endl;
}


