#include <iostream>
#include <list>

using namespace std;

int main() {
	list<char> l;
	list<char>::iterator it;

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		char c;
		cin >> c;
		l.push_back(c);
	}

	it = l.end();

	for (int i = 0; i < b; i++) {
		string command;
		cin >> command;

		if (command == "L") {
			if (it != l.begin()) {
				it--;
			}
		}

		if (command == "R") {
			if (it != l.end()) {
				it++;
			}
		}

		if (command == "D") {
			if (it != l.end()) {
				l.erase(it);
			}
		}

		if (command == "P") {
			char d;
			cin >> d;
			l.insert(it, d);
		}
	}

	for (it = l.begin(); it != l.end(); it++) {
		cout << *it;
	}

	return 0;
}