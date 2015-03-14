#include "Item.h"

const int Item::EMPTYFIELD_ID = 0;
const string Item::EMPTYFIELD_NAME = "";
const string Item::EMPTYFIELD_DESCRIPTION = "";
const DateAndTime Item::EMPTYFIELD_DATEANDTIME = DateAndTime(-1, -1, -1, -1, -1);
const char Item::EMPTYFIELD_PRIORITY = '\0';
const char Item::EMPTYFIELD_LABEL = '\0';
const bool Item::EMPTYFIELD_ISCOMPLETED = false;

Item::Item() : _id(EMPTYFIELD_ID), 
			   _name(EMPTYFIELD_NAME),
			   _description(EMPTYFIELD_DESCRIPTION),
			   _startTime(EMPTYFIELD_DATEANDTIME),
			   _endTime(EMPTYFIELD_DATEANDTIME),
			   _priority(EMPTYFIELD_PRIORITY),
			   _label(EMPTYFIELD_LABEL), 
			   _isCompleted(EMPTYFIELD_ISCOMPLETED){
}

Item& Item::operator= (const Item& rhs) {
	if (this != &rhs) {
		this->_id = rhs._id;
		this->_name = rhs._name;
		this->_description = rhs._description;
		this->_startTime = rhs._startTime;
		this->_endTime = rhs._endTime;
		this->_priority = rhs._priority;
		this->_label = rhs._label;
		this->_isCompleted = rhs._isCompleted;
	}
	return *this;
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
	bool hasStartTime = _startTime.hasDateAndTime;
	bool hasEndTime = _endTime.hasDateAndTime;
	bool hasPriority = (_priority != EMPTYFIELD_PRIORITY);
	bool hasLabel = (_label != EMPTYFIELD_LABEL);
	
	output << "Item: " << _name << endl;

	if (hasDescription) {
		output << "Description: " << _description << endl;
	}

	if (hasStartTime && hasEndTime) {
		output << "From: " << _startTime.displayDateAndTime() << " To: " << setw(15) << _endTime.displayDateAndTime() << endl;
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

	return output.str();
}