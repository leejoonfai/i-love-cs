#include "InstructionPair.h"

InstructionPair::InstructionPair(string instruction, string instructionDetails) {
	_instruction = instruction;
	_instructionDetails = instructionDetails;
}

const string InstructionPair::getInstruction() {
	return _instruction;
}

const string InstructionPair::getInstructionDetails() {
	return _instructionDetails;
}