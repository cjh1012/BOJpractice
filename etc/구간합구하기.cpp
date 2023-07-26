#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> sum;
vector<int> result;

int main(void) {
	int n, m;
	cin >> n >> m;

	sum.push_back(0);

	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		sum.push_back(sum[i-1] + temp);
	}

	for (int i = 0; i < m; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		result.push_back(sum[temp2] - sum[temp1-1]);
	}

	for (int i = 0; i < m; i++) {
		cout << result[i] << "\n";
	}
}