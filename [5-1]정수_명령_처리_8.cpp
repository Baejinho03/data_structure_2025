#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> l;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push_front") {
			int num1;
			cin >> num1;
			l.push_front(num1);
		}

		else if (command == "push_back") {
			int num2;
			cin >> num2;
			l.push_back(num2);
		}
		
		else if (command == "pop_front") {
			int a = l.front();
			l.pop_front();
			cout << a << endl;
		}

		else if (command == "pop_back") {
			int b = l.back();
			l.pop_back();
			cout << b << endl;
		}

		else if (command == "size") {
			cout << l.size() << endl;
		}

		else if (command == "empty") {
			cout << l.empty() << endl;
		}

		else if (command == "front") {
			cout << l.front() << endl;
		}

		else {
			cout << l.back() << endl;
		}
	}
	return 0;
}