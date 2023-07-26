#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	map<string,int> p;
	map<string, int> name;
	int count = 0;

	for (int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		name.insert(make_pair(temp, i));
	}
	for (int i = 0; i < m; i++) {
		string temp;
		cin >> temp;
		if (name.find(temp) != name.end()) {
			count++;
			p.insert(make_pair(name.find(temp)->first,i));
		}
	}
	
	cout << count << "\n";
	for (auto iter = p.begin(); iter != p.end(); iter++) {
		cout << iter->first << "\n";
	}
}