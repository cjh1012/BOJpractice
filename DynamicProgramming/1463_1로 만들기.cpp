#include<iostream>
#define MAX 1000001

using namespace std;

int arr[MAX] = { 0 };

int main(void) {
	int n;
	cin >> n;

	arr[1] = 0;
	for (int i = 2; i <= n; i++) {
		int temp1 = 100000;
		int temp2 = 100000;
		int temp3 = 100000;
		if (i % 3 == 0) {
			temp1 = 1 + arr[i / 3];
		}
		if (i % 2 == 0) {
			temp2 = 1 + arr[i / 2];
		}
		temp3 = 1 + arr[i - 1];

		arr[i] = min(temp1, min(temp2, temp3));
	}

	cout << arr[n];
}