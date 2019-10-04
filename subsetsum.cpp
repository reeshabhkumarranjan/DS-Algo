#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// max subset sum with non-contiguous elements
	ll n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll dp[n];
	dp[0] = a[0];
	dp[1] = a[1];
	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], a[i] + dp[i - 2]);
	}
	cout << *max_element(dp, 0, n) << endl;
}
