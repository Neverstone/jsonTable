#include <iostream>
#include <vector>
#include <fstream>

class fileReader
{
	std::ifstream fileStream;
	std::vector<std::string> data; 
public:
	fileReader(const char filename[100]);
    ~fileReader();
	int readLines();
	std::vector<std::string> getData();
};