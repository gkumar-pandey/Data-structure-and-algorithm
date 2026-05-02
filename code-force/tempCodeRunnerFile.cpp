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

int solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n % 2 != 0) {
    cout << "NO" << endl;
    return;
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '(') count++;
  }

  if (count == n / 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cout << solve() << endl;
  }
  return 0;
}
