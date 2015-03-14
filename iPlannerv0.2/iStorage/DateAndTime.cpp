#include "DateAndTime.h"

const int DateAndTime::MIN_YEAR = 0;
const int DateAndTime::MAX_YEAR = 9999;
const int DateAndTime::MIN_MONTH = 1;
const int DateAndTime::MAX_MONTH = 12;
const int DateAndTime::MIN_DAY = 1;
const int DateAndTime::MAX_DAY = 31;
const int DateAndTime::MIN_HOUR = 0;
const int DateAndTime::MAX_HOUR = 23;
const int DateAndTime::MIN_MINUTE = 0;
const int DateAndTime::MAX_MINUTE = 59;
const int DateAndTime::EMPTYFIELD_DATETIME = -1;

DateAndTime::DateAndTime(int year, int month, int day, int hour, int minute) {
	_year = year;
	_month = month;
	_day = day;
	_hour = hour;
	_minute = minute;
}

bool DateAndTime::isValidDate() {
	if (isValidYear() && isValidMonth() && isValidDay()) {
		return true;
	}
	else if (isValidMonth() && isValidDate()) {
		return true;
	}
	else {
		return false;
	}
}

bool DateAndTime::isValidYear() {
	if (_year <= MAX_YEAR && _year >= MIN_YEAR) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidMonth() {
	if (_month <= MAX_MONTH && _month >= MIN_MONTH) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidDay() {
	if (_day <= MAX_DAY && _day >= MIN_DAY) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidTime() {
	if (isValidHour)
}


bool DateAndTime::isValidHour() {

}

bool DateAndTime::isValidMinute() {

}

bool DateAndTime::isValidDateAndTime() {
	if (isValidDate() && isValidTime()) {
		return true;
	} else if (isValidDate()) {
		return true;
	} else {
		return false;
	}
}

string DateAndTime::displayDateAndTime() {

}