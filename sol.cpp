#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if (n == 0) { // anything raised to 0 is equal to 1
		cout << 1 << '\n';
		return 0;
	}
	// otherwise, it can be observed that there is a pattern 
	// in the last digits of 8 ^ n, 8 ^ ( n + 1), 8 ^ (n + 2), 8 ^ (n + 3), ...
	int last[] = {6, 8, 4, 2};
	cout << last[n % 4] << '\n';
	return 0;
}