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
const int DateAndTime::INVALID_DATETIME = -2;


DateAndTime::DateAndTime(int year, int month, int day, int hour, int minute) {
	if (year == EMPTYFIELD_DATETIME || (year <= MAX_YEAR && year >= MIN_YEAR)) {
		_year = year;
	} else {
		_year = INVALID_DATETIME;
	}

	if (month == EMPTYFIELD_DATETIME || (month <= MAX_MONTH && month >= MIN_MONTH)) {
		_month = month;
	} else {
		_month = INVALID_DATETIME;
	}

	if (day == EMPTYFIELD_DATETIME || (day <= MAX_DAY && day >= MIN_DAY)) {
		_day = day;
	} else {
		_day = INVALID_DATETIME;
	}

	if (hour == EMPTYFIELD_DATETIME || (hour <= MAX_HOUR && hour >= MIN_HOUR)) {
		_hour = hour;
	} else {
		_year = INVALID_DATETIME;
	}

	if (minute == EMPTYFIELD_DATETIME || (minute <= MAX_MINUTE && year >= MIN_MINUTE)) {
		_minute = minute;
	} else {
		_minute = INVALID_DATETIME;
	}
}

bool DateAndTime::isValidDateAndTime() {
	if (_year != INVALID_DATETIME && _month != INVALID_DATETIME && _day != INVALID_DATETIME && _hour != INVALID_DATETIME && _minute != INVALID_DATETIME) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::hasDateAndTime() {
	/////////// I STOPPED HERE ///////////////
	//////////////////////////////////////////
	//////////////////////////////////////////
	//////////////////////////////////////////
}

string DateAndTime::displayDateAndTime() {

}