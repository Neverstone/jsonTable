#include "fileReader.h"
#include "fileWriter.h"
#include "common.h"

#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class date {
	unsigned int day;
	unsigned int month;
	unsigned int year;
public:
	date();
	date(int d, int m, int y);
	string toString();
	date operator=(const date& other);
};

struct person {
	std::string firstName;
	std::string lastName;
	char sex;
	date birth;
	date death;
	bool alive;
	person();
};

class persons {
	std::vector<person> data; 
	char *fileName;
public:
	void read();
	void write();
	string **getData();
	int getSize();
	void setFile(char *str);
};