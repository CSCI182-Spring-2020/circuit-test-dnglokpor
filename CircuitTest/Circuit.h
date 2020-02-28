#pragma once
#include <iostream>

using namespace std;

class Circuit
{
protected:
	int* _firstBranch;
	int* _secondBranch;
private:
	int _resistance;
public:
	// constructors
	Circuit();
	Circuit(int resistance);
	
	// destructor
	~Circuit();

	// member function
	void printCircuit();
	virtual void intToSymbol(int value);
	/// <summary>
	/// Copy constructor
	/// </summary>
	/// <param name="oldCircuit"></param>
	Circuit(const Circuit& oldCircuit);
};

