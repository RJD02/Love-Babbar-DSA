// TC: O(k * log(n)) == O(log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v, int k) {
	priority_queue<int> pq(v.begin(), v.end());
	while(--k)
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
		cout << solve(v, k);
	}
}