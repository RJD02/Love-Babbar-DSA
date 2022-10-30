#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v) {
	int pivot = 0;
	int j = 0;
	for(int i = 0; i < v.size(); i++) {
		if(v[i] < pivot) {
			swap(v[i], v[j]);
			j++;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		solve(v);
		for(auto i: v)
			cout << i << " ";
		cout << endl;
	}
}