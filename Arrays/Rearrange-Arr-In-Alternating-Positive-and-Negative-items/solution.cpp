#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr) {
	int pivot = 0;
	int j = 0;
	int n = arr.size();
	for(int i = 0; i < n; i++) {
		if(arr[i] < pivot)
			swap(arr[i], arr[j++]);
	}

	return j;
}

void solve(vector<int> &arr) {
	int n = arr.size();
	int p = partition(arr);

	for(auto i: arr)
		cout << i << " ";
	cout << endl;

	for(int i = 1; i < p and p < n; i += 2, p++) {
		swap(arr[i], arr[p]);
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
		cout << endl << endl;
	}
	return 0;
}