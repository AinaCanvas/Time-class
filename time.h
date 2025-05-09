#include<iostream>
using namespace std;

class Time{
private:
	int* hours;
	int* minutes;
	int* seconds;
public:
	//Overloaded constructor with default values
	Time(int h, int m, int s);

	//Copy Constructor
	Time(const Time &t);

	//Destructor
	~Time();

	//Getter of each attribute 
	int* getHours()const;
	int* getMinutes()const;
	int* getSeconds()const;

	//operator == overload
	bool operator==(const Time &t);

	//operator > overload
	bool operator>(const Time &t)const;

	//operator != overload
	bool operator!=(const Time& t) const;

	//operator < overload
	bool operator<(const Time &t)const;

	//operator <= overload
	bool operator<=(const Time &t)const;

	//operator >= overload
	bool operator>=(const Time &t)const;
};