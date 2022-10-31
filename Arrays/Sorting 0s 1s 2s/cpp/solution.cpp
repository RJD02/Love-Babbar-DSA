// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int pivot, int j = 0) {
	for(int i = j; i < v.size(); i++) {
		if(v[i] < pivot) {
			swap(v[i], v[j]);
			j++;
		}
	}
	return j;
}

void solve(vector<int> v) {
	int zeroEnding = partition(v, 1);
	partition(v, 2, zeroEnding);
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
