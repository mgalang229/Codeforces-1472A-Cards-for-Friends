#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int w, h, n;
  	cin >> w >> h >> n;
  	// count the number of produced cards separately
		int res = 1;
		// for every cut in the width part, multiply the result by 2
		while (w % 2 == 0) {
			w /= 2;
			res *= 2;
		}
		// for every cut in the height part, multiply the result by 2
		while (h % 2 == 0) {
			h /= 2;
			res *= 2;
		}
		cout << (res >= n ? "YES" : "NO") << '\n';
  } 
  return 0;
}      
