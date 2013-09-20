#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	
	string usrName;

	time_t now = time(0);
	char * dt = ctime(&now);

	cout << "Enter your name: ";
	cin >> usrName;

	cout << "Hello " << usrName << endl;
	cout << "The date and time is " << dt;

	return 0;
}
