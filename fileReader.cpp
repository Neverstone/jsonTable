#include "fileReader.h"

fileReader::fileReader(const char filename[100]) {
	fileStream.open(filename);
}

fileReader::~fileReader() {
	fileStream.close();
}

int fileReader::readLines() {
	std::string line;

	try {
		while(getline(fileStream, line)) {
			data.push_back(line);
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	return 0;
}

std::vector<std::string> fileReader::getData() { return data; }