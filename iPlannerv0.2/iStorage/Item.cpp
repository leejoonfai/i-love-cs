#include "Item.h"

const string Item::EMPTYFIELD_NAME = "";
const string Item::EMPTYFIELD_DESCRIPTION = "";
const int Item::EMPTYFIELD_ITEMID = 0;
const char Item::EMPTYFIELD_PRIORITY = '\0';
const char Item::EMPTYFIELD_LABEL = '\0';

Item::Item() {
	_name = EMPTYFIELD_NAME;
	_description = EMPTYFIELD_DESCRIPTION;
	_id = EMPTYFIELD_ITEMID;
	_priority = EMPTYFIELD_PRIORITY;
	_label = EMPTYFIELD_LABEL;
	_isCompleted = false;
}

void Item::setID(unsigned int id) {
	_id = id;
}

void Item::setName(string name) {
	if (name != EMPTYFIELD_NAME) {
		_name = name;
	}
}

void Item::setDescription(string description) {
	_description = description;
}

void Item::setStartTime(DateAndTime startTime) {
	_startTime = startTime;
}

void Item::setEndTime(DateAndTime endTime) {
	_endTime = endTime;
}

void Item::setPriority(char priority) {
	_priority = priority;
}

void Item::setLabel(char label) {
	_label = label;
}

void Item::setCompletion(bool isCompleted) {
	_isCompleted = isCompleted;
}

string Item::displayItem() {
	ostringstream output;
	bool hasDescription = (_description != EMPTYFIELD_DESCRIPTION);
	bool hasStartTime = _startTime.isValidDateAndTime;
	bool hasEndTime = _endTime.isValidDateAndTime;
	bool hasPriority = (_priority != EMPTYFIELD_PRIORITY);
	bool hasLabel = (_label != EMPTYFIELD_LABEL);
	
	output << "Item: " << _name << endl;

	if (hasDescription) {
		output << "Description: " << _description << endl;
	}

	if (hasStartTime && hasEndTime) {
		output << "From: " << _startTime.displayDateAndTime() << " To: " << _endTime.displayDateAndTime() << endl;
	} else if (hasStartTime) {
		output << "At: " << _startTime.displayDateAndTime() << endl;
	} else {
		output << "By: " << _endTime.displayDateAndTime() << endl;
	} 

	if (hasPriority) {
		output << "Priority: " << _priority << endl;
	}

	if (hasLabel) {
		output << "Label: " << _label << endl;
	}
}