#include "persons.h"

date::date() : day(0), month(0), year(0) {};

date::date(int d, int m, int y) : day(d), month(m), year(y) {};

string date::toString() {
	return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
}

date date::operator=(const date& other) {
	return date(day = other.day, month = other.month, year = other.year);
}

person::person() {
	firstName.clear();
	lastName.clear();
	sex = 0;
	birth = date(0,0,0);
	death = date(0,0,0);
	alive = false;
};

void persons::setFile(char *str){
	fileName = str;
}

void persons::read() {
	fileReader file(fileName);
	file.readLines();
	char *d = file.getData();

	person parse;

	while(d != NULL) {
	    parse.firstName = strtok(d, ",");
	    parse.lastName = strtok(d, ",");
	    string str = strtok(d, ",");
	    parse.sex = str[0];
	    parse.birth = date(atoi(strtok(d, "-")),atoi(strtok(d, "-")),atoi(strtok(d, ",")));
	    parse.death = date(atoi(strtok(d, "-")),atoi(strtok(d, "-")),atoi(strtok(d, ",")));
	    parse.alive = *strtok(d, ",") != '0';

	    data.push_back(parse);

	    d = strtok(d, "\n");
	}
}

void persons::write() {
	fileWriter file(fileName);
	//file.setData(d);
	file.writeLines();
}

string **persons::getData(){
	string **table = AllocateDynamicArray<string>(6, data.size());

	for (unsigned int i = 0; i < data.size(); ++i) {
		table[i][0] = data[i].firstName;
		table[i][1] = data[i].lastName;
		table[i][2] = data[i].sex;

		table[i][3] = data[i].birth.toString();
		table[i][4] = data[i].death.toString();
		if (data[i].alive)
			table[i][5] = "Alive";
		else
			table[i][5] = "Dead";
	}

	return table;
}

int persons::getSize() {
	return data.size;
}