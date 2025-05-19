#include <iostream>

using namespace std;

int n;
int arr[100];

void BubbleSort() {

	for (int i = 0; i < n - 1; i++) {
		for (int k = 0; k < n - 1 - i; k++) {
			if (arr[k] > arr[k + 1]) {
				int tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	BubbleSort();

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
