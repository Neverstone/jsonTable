#include "cli.h"

cli::cli() {
	setTable();
	print();
}

void cli::setTable() {
	table = persons.getData();
	tableSize = persons.getSize();
}

void print() {
	for (int i = 0; i < tableSize; ++i)
	{
		for (int i = 0; i < 6; ++i)
			std::cout << table[i] << "\t";
		std::cout << "\n";
	}
}