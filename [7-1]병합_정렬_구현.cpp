#include <iostream>

using namespace std;

int n;
int arr[100000];
int merged_arr[1000000];


void Merge(int low, int mid, int high) {
	int i = low;
	int j = mid + 1;
	int k = low;
	

	while (i <= mid && j <= high) {
		if (arr[i] <= arr[j]) {
			merged_arr[k] = arr[i];
			k++;
			i++;
		}
		else {
			merged_arr[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		merged_arr[k] = arr[i];
		k++;
		i++;
	}
	
	while (j <= high) {
		merged_arr[k] = arr[j];
		k++;
		j++;
	}

	for (int k = low; k <= high; k++) {
		arr[k] = merged_arr[k];
	}
}
void MergeSort(int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;

		MergeSort(low, mid);
		MergeSort(mid + 1, high);
		Merge(low, mid, high);
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	MergeSort(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}