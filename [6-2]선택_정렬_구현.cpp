#include <iostream>

using namespace std;

int n;
int arr[100];

void SelectionSort() {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;

		for (int k = i + 1; k < n; k++) {
			if (arr[k] < arr[min_index]) {
				min_index = k;
			}
		}

		int tmp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = tmp;
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	SelectionSort();

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}