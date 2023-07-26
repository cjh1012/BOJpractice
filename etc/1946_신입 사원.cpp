#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(int vectorsize, vector<pair<int,int>> v) {
	sort(v.begin(), v.end());		//�����ɻ� ������ ����

	int first1 = 0;					//�����ɻ� 1��= first 1
	int count = 1;
	int maxRank = v[0].second;		
	for (int i = 1; i < vectorsize; i++) {
		if (v[i].second < maxRank) {
			maxRank = v[i].second;
			count++;
		}
	}
	return count;
}

int main(void) {
	int testcase;
	cin >> testcase;
	vector<int> result;

	for (int i = 0; i < testcase; i++) {
		int p;
		cin >> p;

		vector<pair<int, int>> rank;	//�����ɻ�, ���� ������ ���� ���� ����

		for (int j = 0; j < p; j++) {
			pair<int, int> temp;
			cin >> temp.first >> temp.second;
			rank.push_back(temp);
		}
		
		int temp = find(p, rank);
		
		result.push_back(temp);
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
	
}