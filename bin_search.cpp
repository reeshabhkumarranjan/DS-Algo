#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// bin search algo
	ll n, x;
	cin >> n >> x;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll low = 0, high = N-1;
	while (high - low > 1) {
		ll mid = (high + low) / 2;
		if (A[mid] < x) {
			high = mid;
		}
		else {
			low = mid;
		}
	}
	cout << ((a[low] == x) : a[low] ? a[high]) << endl;
}
