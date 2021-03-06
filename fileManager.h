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

class fileWriter
{
	std::ofstream fileStream;
	char *data; 
public:
	fileWriter(const char filename[100]);
	~fileWriter();	
	int writeLines();
	void setData(char *d);
	void clearData();
};