#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cassert>

using namespace std;

int main() {

  long long X, Y;
  cin >> X >> Y;

  int result = 0;
  for(int sz = 3; sz <= 17; sz++) {
    for(int d0 = 0; d0 < 10; d0++) {
      string S(sz, '0' + d0);
      for(int d1 = 0; d1 < 10; d1++) {
        if(d0 == d1) continue;

        for(int i = 0; i < sz; i++) {
          S[i] = '0' + d1;

          long long num = atoll(S.c_str());
          if(S[0] != '0' && X <= num && num <= Y) {
            ++result;
          }

          S[i] = '0' + d0;
        }
      }
    }
  }
  cout << result << endl;
  return 0;
}