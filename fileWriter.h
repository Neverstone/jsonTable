#include <iostream>
#include <vector>
#include <fstream>

class fileWriter
{
	std::ofstream fileStream;
	std::vector<std::string> data; 
public:
	fileWriter(const char filename[100]);
	~fileWriter();	
	int writeLines();
	void setData(int count, string const *arr[]);
	void clearData();
};