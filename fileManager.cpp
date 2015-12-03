#include "filemanager.h"

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

fileWriter::fileWriter(const char filename[100]) {
	fileStream.open(filename);
}

fileWriter::~fileWriter() {
	fileStream.close();
}

int fileWriter::writeLines() {
	
	outfile.write(data, size);
	return 0;
}

void fileWriter::setData(char *d, int length) { 
	data = d;
}

void fileWriter::clearData() { data.clear(); }