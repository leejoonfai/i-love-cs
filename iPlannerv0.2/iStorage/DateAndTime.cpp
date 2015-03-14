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

DateAndTime::DateAndTime() : _year(EMPTYFIELD_DATETIME),
							 _month(EMPTYFIELD_DATETIME),
							 _day(EMPTYFIELD_DATETIME),
							 _hour(EMPTYFIELD_DATETIME),
							 _minute(EMPTYFIELD_DATETIME){
}

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

DateAndTime& DateAndTime::operator= (const DateAndTime& rhs) {
	if (this != &rhs) {
		this->_year = rhs._year;
		this->_month = rhs._month;
		this->_day = rhs._day;
		this->_hour = rhs._hour;
		this->_minute = rhs._minute;
	}
	return *this;
}

bool DateAndTime::isValidDateFormat() {
	if (_month != EMPTYFIELD_DATETIME && _day != EMPTYFIELD_DATETIME) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidTimeFormat() {
	if (_hour != EMPTYFIELD_DATETIME) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidDateAndTimeValues() {
	if (_year != INVALID_DATETIME && _month != INVALID_DATETIME && _day != INVALID_DATETIME && _hour != INVALID_DATETIME && _minute != INVALID_DATETIME) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::isValidDateAndTime(){
	if (isValidDateFormat() && isValidTimeFormat() && isValidDateAndTimeValues()) {
		return true;
	} else {
		return false;
	}
}

bool DateAndTime::hasDateAndTime() {
	if (_year != EMPTYFIELD_DATETIME && _month != EMPTYFIELD_DATETIME && _day != EMPTYFIELD_DATETIME && _hour != EMPTYFIELD_DATETIME && _minute != EMPTYFIELD_DATETIME) {
		return true;
	} else {
		return false;
	}
}

string DateAndTime::displayDateAndTime() {
	ostringstream output;

	output << _day << "/" << _month;
	if (_year != EMPTYFIELD_DATETIME) {
		output << "/" << _year;
	} else {
		output << "   ";
	}
	if (_hour != EMPTYFIELD_DATETIME) {
		output << " " << _hour << ":";
	}
	if (_minute != EMPTYFIELD_DATETIME) {
		output << _minute;
	} else {
		output << "00";
	}

	return output.str();
}