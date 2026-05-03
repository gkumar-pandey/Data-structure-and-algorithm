#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int n = s.length();
  char last = 0;
  // Find the last relevant character (not space, tab, or '?')
  for (int i = n - 1; i >= 0; i--) {
    if (isalpha(s[i])) {
      last = tolower(s[i]);
      break;
    }
    if (s[i] == '?') continue;
    if (s[i] == ' ' || s[i] == '\t') continue;
  }

  if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' || last == 'y') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}