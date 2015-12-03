
void persons::setFile(char *str){
	fileName = str;
}

void persons::read() {
	fileReader file(fileName);
	file.readLines();
	char *d = file.getData();

	person parse;

	while(d != NULL) {
	    parse.firstName = strtok(d, ",");
	    parse.lastName = strtok(d, ",");
	    string str = strtok(d, ",");
	    parse.sex = str[0];
	    parse.birth = date(atoi(strtok(d, "-")),atoi(strtok(d, "-")),atoi(strtok(d, ",")));
	    parse.death = date(atoi(strtok(d, "-")),atoi(strtok(d, "-")),atoi(strtok(d, ",")));
	    parse.alive = *strtok(d, ",") != '0';

	    data.push_back(parse);

	    d = strtok(d, "\n");
	}
}

void persons::write() {
	fileWriter file(fileName);
	//file.setData(d);
	file.writeLines();
}

string **persons::getData(){
	string **table = AllocateDynamicArray<string>(6, data.size());

	for (unsigned int i = 0; i < data.size(); ++i) {
		table[i][0] = data[i].firstName;
		table[i][1] = data[i].lastName;
		table[i][2] = data[i].sex;

		table[i][3] = data[i].birth.toString();
		table[i][4] = data[i].death.toString();
		if (data[i].alive)
			table[i][5] = "Alive";
		else
			table[i][5] = "Dead";
	}

	return table;
}

int persons::getSize() {
	return data.size;
}