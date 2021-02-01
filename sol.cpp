#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int w, h, n;
  	cin >> w >> h >> n;
  	// view the image in this repository for better understanding
  	int ans = 1;
  	int exponent = 1;
  	// run a while-loop until the width and height are both odd
  	while (w % 2 == 0 || h % 2 == 0) {
  		// one of these operations will happen at a time:
  		if (w % 2 == 0) {
  			// if the width is even, then divide it by 2
  			w /= 2;
  		} else if (h % 2 == 0) {
  			// if the height is even, divide it by 2
  			h /= 2;
  		}
  		// every cut of card produces two sheets
  		// that's why every sequence of the loop produces 2 ^ n cards
  		// store the number of cards at the bottom level
   		ans = Power(2, exponent++);
  	}       
  	// check if the number of cards cut is greater than or equal to the needed number of cards
  	cout << (ans >= n ? "YES" : "NO") << '\n';
  } 
  return 0;
}      