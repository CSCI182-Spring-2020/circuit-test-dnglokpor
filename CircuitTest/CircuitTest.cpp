/*
CSCI 182 - Assignment 8
CircuitTest.cpp
Create a Circuit class, and instantiate an object of Circuit and let go out of scope.

Brett Huffman
v1.0 2/20/2020
*/

#include <iostream>
#include "Circuit.h"
#include "ParrallelCircuit.h"
#include "SeriesCircuit.h"

using namespace std;

int main()
{
    // instance of Parrallel Circuit
    ParrallelCircuit test(6);
    // instance of Series Circuit
    SeriesCircuit test2(9);
}
