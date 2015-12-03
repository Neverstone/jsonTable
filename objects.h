
class date {
	unsigned int day;
	unsigned int month;
	unsigned int year;
public:
	date();
	date(int d, int m, int y);
	string toString();
	date operator=(const date &other);
	bool operator<(const date &other);
	bool operator>(const date &other);
};

struct person {
	unsigned int id;
	std::string firstName;
	std::string lastName;
	char sex;
	date birth;
	date death;
	bool alive;
	person();
};

struct person {
	std::string name;
	std::string type;
	date built;
	bool wasBuilt;
	computer();
};