#include "persons.h"

#include <iostream>
#include <string>

class cli
{
	std::string **table;
	int tableSize;
public:
	cli();
	void setTable();
};