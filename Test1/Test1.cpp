// Test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int stop;
	int int1 = 4;
	int* intstar1;
	intstar1 = &int1;
	*intstar1 = 10;
	cout << int1;
	
	cin >> stop;
	return 0;
}

