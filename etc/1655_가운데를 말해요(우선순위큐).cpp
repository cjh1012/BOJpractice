#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int,vector<int>, greater<int>> min_heap; //큰쪽
	priority_queue<int> max_heap;		//작은쪽
	
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		int n;
		cin >> n;
		if (i%2 == 1){
			max_heap.push(n); 
		}
		else {
			min_heap.push(n);
		}
		if (!max_heap.empty() && !min_heap.empty()) {
			if (min_heap.top() < max_heap.top()) {
				int p = min_heap.top();
				int q = max_heap.top();
				min_heap.pop();
				max_heap.pop();
				min_heap.push(q);
				max_heap.push(p);
			}
		}
		cout << max_heap.top() << "\n";
	}
}