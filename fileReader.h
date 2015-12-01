#include <vector>
#include <fstream>

class fileReader
{
	ifstream fileStream;
	vector<string> data; 
public:
	fileReader(const char[100]);
	~fileReader();
	int readLines();
	vector<string> getData();
};