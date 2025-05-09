#include"time.h"

int main(){

	Time t1(10, 30, 45);
	Time t2(12, 45, 30);
	Time t3(10, 30, 45);

	// Display the times
	cout << "Time 1: " << *t1.getHours() << ":" << *t1.getMinutes() << ":" << *t1.getSeconds() << endl;
	cout << "Time 2: " << *t2.getHours() << ":" << *t2.getMinutes() << ":" << *t2.getSeconds() << endl;
	cout << "Time 3: " << *t3.getHours() << ":" << *t3.getMinutes() << ":" << *t3.getSeconds() << endl;

	// Compare the times using overloaded operators
	cout << "t1 == t3: " << (t1 == t3 ? "True" : "False") << endl;
	cout << "t1 != t2: " << (t1 != t2 ? "True" : "False") << endl;
	cout << "t1 > t2: " << (t1 > t2 ? "True" : "False") << endl;
	cout << "t1 < t2: " << (t1 < t2 ? "True" : "False") << endl;
	cout << "t1 <= t3: " << (t1 <= t3 ? "True" : "False") << endl;
	cout << "t2 >= t1: " << (t2 >= t1 ? "True" : "False") << endl;

	system("pause");
	return 0;
}