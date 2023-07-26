#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(void) {
	int n;
	cin >> n;
	
	vector<int> fib;
	int sum;
	
	fib.push_back(1);
	fib.push_back(2);
	
	for (int i = 2; i < n; i++) {
		int temp;
		temp = (fib[i - 1] + fib[i - 2]) % 15746;
		fib.push_back(temp);
	}
	cout << fib[n - 1];
}