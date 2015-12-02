#include <iostream>
#include <vector>
#include <fstream>

class fileReader
{
	std::ifstream fileStream;
	char *data; 
public:
	fileReader(const char filename[100]);
    ~fileReader();
	int readLines();
	char* getData();
};