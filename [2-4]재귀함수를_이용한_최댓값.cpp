#include <iostream>
#include <algorithm>

#define max_n 100

using namespace std;

int arr[max_n];

int findmax(int a) {
	if (a == 0) {
		return arr[0];
	}

	return max(findmax(a - 1), arr[a]);
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << findmax(n - 1);

	return 0;
}