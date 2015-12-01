#include "fileWriter.h"

fileWriter::fileWriter(const char filename[100]) {
	fileStream.open(filename);
}

fileWriter::~fileWriter() {
	fileStream.close();
}

int fileWriter::writeLines() {
	
	
	return 0;
}

void fileWriter::setData(int count, string const *arr[]) { 
	for (int i = 0; i < count; ++i)
		data.push_back(arr[i]);
}

void fileWriter::clearData() { data.clear(); }