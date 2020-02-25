#pragma once

#include "Circuit.h"
#include <iostream>

class SeriesCircuit:public Circuit
{
public:
	// constructors
	SeriesCircuit() {};
	SeriesCircuit(int resistance);

	// destructor
	~SeriesCircuit();

	// others
	void printCircuit();
};

