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

int main() {
  int t, s, q;
  int ans = 0;
  cin >> t >> s >> q;

  while (s < t) {
    ans++;
    s *= q;
  }
  cout << ans << endl;
  return 0;
}
