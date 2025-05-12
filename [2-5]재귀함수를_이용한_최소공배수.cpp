#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int F2(int b, int c) {
	int d = 0;
	for (int i = 1; i <= min(b, c); i++) {
		if (b % i == 0 && c % i == 0) {
			d = i;
		}
	}
	return b * c / d;
}

int F1(int a) {
	if (a == 1) {
		return arr[1];
	}
	return F2(F1(a - 1), arr[a]);
}

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cout << F1(n);

	return 0;
}