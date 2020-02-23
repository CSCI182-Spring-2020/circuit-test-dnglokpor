#pragma once
#include <iostream>

using namespace std;

class Circuit
{
private:
	int* _firstBranch;
	int* _secondBranch;
public:
	// constructors
	Circuit();
	Circuit(int elt1, int elt2, int elt3);
	
	// destructor
	~Circuit();

	// member function
	void printCircuit();
	void intToSymbol(int value);
};

