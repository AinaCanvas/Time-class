#include"time.h"


//Overloaded constructor with default values
Time::Time(int h = 0, int m = 0, int s = 0) {
	if (h < 1 || h > 12) {
		std::cerr << "Invalid hour value. Setting hour to 1." << std::endl;
		h = 1;  // Default to 1 if invalid
	}
	if (m < 0 || m >= 60) {
		std::cerr << "Invalid minute value. Setting minute to 0." << std::endl;
		m = 0;  // Default to 0 if invalid
	}
	if (s < 0 || s >= 60) {
		std::cerr << "Invalid second value. Setting second to 0." << std::endl;
		s = 0;  // Default to 0 if invalid
	}

	hours = new int(h);
	minutes = new int(m);
	seconds = new int(s);
}


// Copy Constructor
Time::Time(const Time &t) {
	hours = new int(*t.hours);
	minutes = new int(*t.minutes);
	seconds = new int(*t.seconds);

	if (*hours < 1 || *hours > 12) {
		std::cerr << "Invalid hour value in copied object. Setting hour to 1." << std::endl;
		*hours = 1;
	}
	if (*minutes < 0 || *minutes >= 60) {
		std::cerr << "Invalid minute value in copied object. Setting minute to 0." << std::endl;
		*minutes = 0;
	}
	if (*seconds < 0 || *seconds >= 60) {
		std::cerr << "Invalid second value in copied object. Setting second to 0." << std::endl;
		*seconds = 0;
	}
}

//Destructor
Time::~Time(){
	delete[] hours;
	delete[] minutes;
	delete[] seconds;
}

	//Getter of each attribute 
	int* Time::getHours()const{
		return hours;
	}
	int* Time::getMinutes()const{
		return minutes;
	}
	int* Time::getSeconds()const{
		return seconds;
	}

	//operator == overload
	bool Time::operator==(const Time &t){
		return (*hours == *t.hours && *minutes == *t.minutes && *seconds == *t.seconds);
	}

	//operator > overload
	bool Time::operator>(const Time& t) const {
		if (*hours > *t.hours) {
			return true;
		}
		else if (*hours == *t.hours) {
			if (*minutes > *t.minutes) {
				return true;
			}
			else if (*minutes == *t.minutes) {
				if (*seconds > *t.seconds) {
					return true;
				}
			}
		}
		return false; 
	}

	//operator != overload
	bool Time::operator!=(const Time& t) const {
		if (*hours != *t.hours) {
			return true;
		}
		else if (*hours == *t.hours) {
			if (*minutes != *t.minutes) {
				return true;
			}
			else if (*minutes == *t.minutes) {
				if (*seconds != *t.seconds) {
					return true;
				}
			}
		}
		return false;
	}

	//operator < overload
	bool Time::operator<(const Time& t) const {
		if (*hours < *t.hours) {
			return true;
		}
		else if (*hours == *t.hours) {
			if (*minutes < *t.minutes) {
				return true;
			}
			else if (*minutes == *t.minutes) {
				if (*seconds < *t.seconds) {
					return true;
				}
			}
		}
		return false;
	}

	//operator <= overload
	bool Time::operator<=(const Time& t) const {
		if (*hours < *t.hours) {
			return true;
		}
		else if (*hours == *t.hours) {
			if (*minutes < *t.minutes) {
				return true;
			}
			else if (*minutes == *t.minutes) {
				if (*seconds <= *t.seconds) {
					return true;
				}
			}
		}
		return false;
	}

	//operator >= overload
	bool Time::operator>=(const Time& t) const {
		if (*hours > *t.hours) {
			return true;
		}
		else if (*hours == *t.hours) {
			if (*minutes > *t.minutes) {
				return true;
			}
			else if (*minutes == *t.minutes) {
				if (*seconds >= *t.seconds) {
					return true;
				}
			}
		}
		return false;
	}
