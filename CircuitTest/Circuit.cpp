#pragma once

#include <iostream>
#include "Circuit.h"

using namespace std;

/// <summary>
/// default instantiate a Circuit with no elements in it (zeroed out).
/// </summary>
/// <returns></returns>
Circuit::Circuit() {
	
	_firstBranch = new int[3];
	_secondBranch = new int[3];

	for (int i = 0; i < 3; i++) {
		_firstBranch[i] = 0;
		_secondBranch[i] = 0;
	}
	cout << "Created an empty circuit:" << endl;
	printCircuit();
}

/// <summary>
/// instantiate a Circuit with the passed elements in two opposite orders.
/// </summary>
Circuit::Circuit(int elt1, int elt2, int elt3) {
	
	_firstBranch = new int[3];
	_secondBranch = new int[3];

	_firstBranch[0] = elt1;
	_firstBranch[1] = elt2;
	_firstBranch[2] = elt3;

	_secondBranch[0] = elt3;
	_secondBranch[1] = elt2;
	_secondBranch[2] = elt1;

	cout << "Created a circuit:" << endl;
	printCircuit();
}

/// <summary>
/// Destroy all the instances of Circuit and their member items
/// </summary>
Circuit::~Circuit() {
	
	delete[] _firstBranch;
	delete[] _secondBranch;
	cout << "destroyed a Circuit." << endl;
}

/// <summary>
/// associates an 1,2 and 3 respectively to value to "-I|-", "-{=}-" and "-(L)-";
/// </summary>
/// <param name="value"></param>
void Circuit::intToSymbol(int value) {
	
	switch (value)
	{
		case 1:
			cout << "-I|-";
			break;
		case 2:
			cout << "-{=}-";
			break;
		case 3:
			cout << "-(L)-";
			break;
	default:
		cout << "-???-";
		break;
	}
}

/// <summary>
/// pretty prints the circuit
/// </summary>
void Circuit::printCircuit() {
	for (int i = 0; i < 3; i++) {
		intToSymbol(_firstBranch[i]);
		cout << "///";
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		intToSymbol(_secondBranch[i]);
		cout << "///";
	}
	cout << endl;
}