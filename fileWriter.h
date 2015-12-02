#include <iostream>
#include <vector>
#include <fstream>

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