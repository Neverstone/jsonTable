#include "fileWriter.h"

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