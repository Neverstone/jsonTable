#include "fileReader.h"

fileReader::fileReader(const char filename[100]) {
	fileStream.open(filename);
}

fileReader::~fileReader() {
	fileStream.close();
	delete[] data;
}

int fileReader::readLines() {
	if (fileStream) {

		fileStream.seekg (0, fileStream.end);
		int length = fileStream.tellg();
		fileStream.seekg (0, fileStream.beg);

		data = new char[length];

		fileStream.read(data, length);

		if (fileStream)
			return 0;
		else
			return 1;
	}
	return 1;
}


char *fileReader::getData() { return data; }