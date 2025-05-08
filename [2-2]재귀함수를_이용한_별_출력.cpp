#include <iostream>

using namespace std;

int n;

void a(int n) {
	if (n == 0) {
		return;
	}

	for (int i = 0; i < n; i++) {
		cout << '*' << " ";
	}
	cout << endl;

	a(n - 1);

	for (int i = 0; i < n; i++) {
		cout << '*' << " ";
	}
	cout << endl;
	
}

int main() {
	cin >> n;

	a(n);

	return 0;
}