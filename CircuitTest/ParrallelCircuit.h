#pragma once

#include "Circuit.h"
#include <iostream>

class ParrallelCircuit:public Circuit
{
public:
	// constructors
	ParrallelCircuit() {};
	ParrallelCircuit(int resistance);

	// destructor
	~ParrallelCircuit();

	// others
	void printCircuit();
};

