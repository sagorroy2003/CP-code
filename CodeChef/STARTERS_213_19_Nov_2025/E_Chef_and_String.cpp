// ------------------------------------------------------------------
//            Author: SAGOR ROY
//            Date: 19 November 2025 (Wednesday) | 22:15
// ------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// --- Type Aliases ---
using ll = long long;
using lld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

// --- Constants ---
const lld pi = acos(-1.0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

// --- Macros ---
#define en '\n'
#define endl '\n'
#define yes cout << "YES" << en
#define no cout << "NO" << en

#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define all(x) x.begin(), x.end()
#define pb push_back
#define pf push_front

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / __gcd(a, b) * b)

#define input(v) \
	for (auto &it : v) \
		cin >> it;
#define output(v) \
	for (auto &it : v) \
		cout << it << " ";

// --- Utility Functions ---
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

// ------------------------------------------------------------------
// ------------------- S O L V E -------------------
// ------------------------------------------------------------------

void solve() {
    ll n, k; 
    cin >> n >> k;
    string s;
    cin >> s;

    // vector<char> v;
	string ss = "";
    for(char c : s) {
        if(c != 'I') {
			ss+=c;
        }
    }

    if(ss.empty()) { // mane sob I
        cout << n * k - 1 << en;
        return;
    }

    ll mismatch = 0;
    
    for(int i = 0; i < ss.size() - 1; i++) {
        if(ss[i] != ss[i+1]) {
            mismatch++;
        }
    }

    ll ans = mismatch * k;

    if(k > 1) {
        if(ss.back() != ss[0]) {
            ans += (k - 1);
        }
    }

    cout << (n * k - 1) - ans << en;
}

// ------------------------------------------------------------------
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	// #ifndef ONLINE_JUDGE
	// 	freopen("D:/CP/input.txt", "r", stdin);
	// 	freopen("D:/CP/output.txt", "w", stdout);
	// #endif

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}