#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// set 'diff' to 0
		int diff = 0;
		// set 'mn' to the 1st element of the sequence
		int mn = a[0];
		// start the loop from 1
		for (int i = 1; i < n; i++) {
			// find the maximum difference between the current and minimum element
			diff = max(diff, a[i] - mn);
			// store the minimum value encountered so far (that will be used for the next iterations)
			mn = min(mn, a[i]);
		}
		if (diff > 0) {
			cout << diff;
		} else {
			cout << "UNFIT";
		}
		cout << '\n';
	}
	return 0;
}
