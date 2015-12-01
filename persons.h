
struct date
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
	date operator=()
};

struct person
{
	string firstName;
	string lastName;
	unsigned int age;
	char sex;
	date birth;
	date death;
	bool alive;
};

class persons
{
	vector<person> data; 
public:
	persons();
	~persons();
	void import();
	*string export();
};