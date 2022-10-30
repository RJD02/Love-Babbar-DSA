#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v, int k) {
	priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());
	while(--k > 0)
		pq.pop();
	return pq.top();
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		int res = solve(v, k);
		cout << res << endl;
	}
	return 0;
}