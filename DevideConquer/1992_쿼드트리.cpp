#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	vector<vector<int>> cost;
	int house;
	cin >> house;

	int r, g, b;
	vector<int> temp;
	cin >> r >> g >> b;
	temp.push_back(r);
	temp.push_back(g);
	temp.push_back(b);
	cost.push_back(temp);

	for (int i = 1; i < house; i++) {	
		vector<int> temp;
		cin >> r >> g >> b;
		int temp1, temp2, temp3;
		temp1 = min(cost[i - 1][1], cost[i - 1][2]) + r;
		temp2 = min(cost[i - 1][0], cost[i - 1][2]) + g;
		temp3 = min(cost[i - 1][0], cost[i - 1][1]) + b;
		temp.push_back(temp1);
		temp.push_back(temp2);
		temp.push_back(temp3);
		cost.push_back(temp);
	}

	cout << min(min(cost[house - 1][0], cost[house - 1][1]), cost[house - 1][2]);
}