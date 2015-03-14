#pragma once

#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <sstream>
#include "DateAndTime.h"
using namespace std;

class Item {
private:

	static const string EMPTYFIELD_NAME;
	static const string EMPTYFIELD_DESCRIPTION;
	static const int EMPTYFIELD_ITEMID;
	static const char EMPTYFIELD_PRIORITY;
	static const char EMPTYFIELD_LABEL;

	unsigned int _id;
	string _name;
	string _description;
	DateAndTime _startTime;
	DateAndTime _endTime;
	char _priority;
	char _label;
	bool _isCompleted;

public:

	Item();

	void setID(unsigned int id);
	void setName(string name);
	void setDescription(string description);
	void setStartTime(DateAndTime startTime);
	void setEndTime(DateAndTime endTime);
	void setPriority(char priority);
	void setLabel(char label);
	void setCompletion(bool isCompleted);

	string displayItem();

};

#endif