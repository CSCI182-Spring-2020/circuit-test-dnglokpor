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
	_resistance = 0;
	cout << "Created an empty circuit:";
	printCircuit();
	cout << endl;
}

/// <summary>
/// instantiate a Circuit with the passed elements in two opposite orders.
/// </summary>
Circuit::Circuit(int resistance) {
	
	_firstBranch = new int[3];
	_secondBranch = new int[3];

	for (int i = 0; i < 3; i++) {
		_firstBranch[i] = i + 1;
		_secondBranch[i] = i + 1;
	}

	_resistance = resistance;

	cout << "Created a circuit:";
	printCircuit();
	cout << endl;
}

/// <summary>
/// Destroy all the instances of Circuit and their member items
/// </summary>
Circuit::~Circuit() {
	
	delete[] _firstBranch;
	delete[] _secondBranch;
	cout << "Destroyed a Circuit." << endl;
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
	cout << "~[" << _resistance << "]~";
}