#include "fileManager.h"
#include "common.h"

#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

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