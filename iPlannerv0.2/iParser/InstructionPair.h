#pragma once

#ifndef INSTRUCTION_PAIR_H
#define INSTRUCTION_PAIR_H

#include <string>
using namespace std;

class InstructionPair
{
private:
	string _instruction;
	string _instructionDetails;

public:
	InstructionPair(string, string);

	const string getInstruction();
	const string getInstructionDetails();
};

#endif