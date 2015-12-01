#include "fileReader.h"

fileReader::fileReader(const char[100] filename) {
	fileStream.open(filename);
}

fileReader::~fileReader() {
	fileStream.close();
}

int fileReader::readLines() {
	std::string line;

	try {
		while(getline(fileStream, line)) {
			data.pushback(line);
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	return 0;
}

vector<string> fileReader::getData() { return data; }