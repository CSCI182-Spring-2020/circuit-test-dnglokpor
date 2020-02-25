#include "SeriesCircuit.h"

/// <summary>
/// Define a series circuit
/// </summary>
/// <param name="resistance"></param>
SeriesCircuit::SeriesCircuit(int resistance) :Circuit(resistance) {
	cout << "Created a Series Circuit:" << endl;
	printCircuit();
}

/// <summary>
/// Destroy a series circuit
/// </summary>
SeriesCircuit::~SeriesCircuit() {
	cout << "Destroyed a Series Circuit." << endl;
}

void SeriesCircuit::printCircuit() {
	Circuit::printCircuit();
	for (int i = 0; i < 3; i++)
		Circuit::intToSymbol(Circuit::_firstBranch[i]);
	Circuit::printCircuit();
	for (int i = 0; i < 3; i++)
		Circuit::intToSymbol(Circuit::_secondBranch[i]);
	cout << endl;
}