#pragma once

#ifndef DATE_AND_TIME_H
#define ADTE_AND_TIME_H

#include<string>
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

	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;

	bool isValidDate();
	bool isValidYear();
	bool isValidMonth();
	bool isValidDay();
	bool isValidTime();
	bool isValidHour();
	bool isValidMinute();

public:

	DateAndTime(int, int, int, int, int);

	bool isValidDateAndTime();
	string displayDateAndTime();
};

#endif