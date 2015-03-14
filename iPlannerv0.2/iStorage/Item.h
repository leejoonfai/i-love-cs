#pragma once

#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <sstream>
#include <iomanip>
#include "DateAndTime.h"
using namespace std;

class Item {
private:

	static const int EMPTYFIELD_ID;
	static const string EMPTYFIELD_NAME;
	static const string EMPTYFIELD_DESCRIPTION;
	static const DateAndTime EMPTYFIELD_DATEANDTIME;
	static const char EMPTYFIELD_PRIORITY;
	static const char EMPTYFIELD_LABEL;
	static const bool EMPTYFIELD_ISCOMPLETED;

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
	Item& operator= (const Item &rhs);

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