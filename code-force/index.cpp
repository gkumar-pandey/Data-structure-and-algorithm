#include <bits/stdc++.h>
using namespace std;

// Type definitions for convenience
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

// Macros for faster coding
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

// Common Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
  int n;
  cin >> n;
  vi a, b, c, d;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      a.pb(x);
    } else if (x % 3 == 0) {
      b.pb(x);
    } else if (x % 6 == 0) {
      c.pb(x);
    } else {
      d.pb(x);
    }
  }

  for (int x : a) cout << x << " ";
  for (int x : d) cout << x << " ";
  for (int x : b) cout << x << " ";
  for (int x : c) cout << x << " ";
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
