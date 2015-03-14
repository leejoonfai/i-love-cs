#pragma once

#ifndef DATE_AND_TIME_H
#define ADTE_AND_TIME_H

#include<string>
#include <sstream>
using namespace std;

class DateAndTime {
private:

	static const int MIN_YEAR;
	static const int MAX_YEAR;
	static const int MIN_MONTH;
	static const int MAX_MONTH;
	static const int MIN_DAY;
	static const int MAX_DAY;
	static const int MIN_HOUR;
	static const int MAX_HOUR;
	static const int MIN_MINUTE;
	static const int MAX_MINUTE;
	static const int EMPTYFIELD_DATETIME;
	static const int INVALID_DATETIME;

	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;

	bool isValidDateFormat();
	bool isValidTimeFormat();
	bool isValidDateAndTimeValues();

public:

	DateAndTime();
	DateAndTime(int, int, int, int, int);
	DateAndTime& operator= (const DateAndTime& rhs);

	bool isValidDateAndTime();	// for Logic to check for VALIDITY of DateAndTime
	bool hasDateAndTime();		// for UI to check whether to print startTime or endTime
	string displayDateAndTime();
};

#endif