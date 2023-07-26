#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool visited[100001];
vector<int> graph[100001];
int nodeSequence[100001];
int order = 0;

void dfs(int node) {
	if (visited[node] == true) return;

	visited[node] = true;
	nodeSequence[node] = ++order;

	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		dfs(next);
	}
}


int main(void) {
	int node, edge, start;
	cin >> node >> edge >> start;

	//그래프 정보 입력
	for (int i = 0; i < edge; i++) {
		int s, e;
		cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}
	for (int i = 1; i <= node; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	//재귀
	dfs(start);
	//스택
	for (int i =1; i <= node; i++) {
		cout << nodeSequence[i] << "\n";
	}
}