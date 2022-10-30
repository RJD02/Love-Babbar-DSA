#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	int minVal = INT_MAX, maxVal = -INT_MAX;
	for(auto i: v) {
		minVal = min(minVal, i);
		maxVal = max(maxVal, i);
	}
	cout << minVal << " " << maxVal << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
