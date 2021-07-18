#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		// calculate the total amount of the elements
		sum += a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		// check if the total remaining sum will still be an even number if
		// we remove the current bag of cookie
		if ((sum - a[i]) % 2 == 0) {
			// if yes, then increment 'cnt'
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
