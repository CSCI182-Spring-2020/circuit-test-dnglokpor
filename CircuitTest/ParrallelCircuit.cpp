#include "ParrallelCircuit.h"


/// <summary>
/// Define a parrallel circuit
/// </summary>
/// <param name="resistance"></param>
ParrallelCircuit::ParrallelCircuit(int resistance):Circuit(resistance) {
	cout << "Created a Parrallel Circuit:" << endl;
	printCircuit();
}

/// <summary>
/// Destroy a parrallel circuit
/// </summary>
ParrallelCircuit::~ParrallelCircuit() {
	cout << "Destroyed a Parrallel Circuit." << endl;
}

void ParrallelCircuit::printCircuit() {
	Circuit::printCircuit();
	for (int i = 0; i < 3; i++)
		Circuit::intToSymbol(Circuit::_firstBranch[i]);
	cout << endl;
	Circuit::printCircuit();
	for (int i = 0; i < 3; i++)
		Circuit::intToSymbol(Circuit::_secondBranch[i]);
	cout << endl;
}