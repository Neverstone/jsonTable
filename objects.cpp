#include "objects.h"

date::date() : year(0), month(0), day(0) {};

date::date(unsigned int d, unsigned int m, unsigned int y) : year(d), month(m), day(y) {};

string date::toString() {
	return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
}

date date::operator=(const date& other) {
	return date(year = other.year, month = other.month, day = other.day);
}

bool date::operator<(const date& other) {
	if (day == 0 && month == 0 || other.day == 0 && other.month == 0)
		return (year < other.year) ? true : false;
	else
		return (to_string() < other.to_string()) ? true : false;
}

bool date::operator>(const date& other) {
	if (day == 0 && month == 0 || other.day == 0 && other.month == 0)
		return (year > other.year) ? true : false;
	else
		return (to_string() > other.to_string()) ? true : false;
}

person::person() {
	firstName.clear();
	lastName.clear();
	sex = 0;
	birth = date(0,0,0);
	death = date(0,0,0);
	alive = false;
};

computer::computer() {
	name.clear();
	type.clear();
	built = date(0,0,0);
	wasBuilt = false;
};