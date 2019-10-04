#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("file_name.in", "r", stdin);
    // freopen("file_name.out", "w", stdout);
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        bool flag = true;
        while (flag) {
            flag = false;
            for (int j = i; j < n; j++) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                    flag = true;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    
}
