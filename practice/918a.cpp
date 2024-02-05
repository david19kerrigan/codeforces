#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--){
    set<int> s;
    for (int i = 0, a; i < 3; ++i) {
      cin >> a;
      if(s.count(a)){
        s.erase(a);
      } else {
        s.insert(a);
      }
    }
    cout << *s.begin() << "\n";
  }
}
