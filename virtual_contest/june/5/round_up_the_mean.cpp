#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define array_length(array) (sizeof(array) / sizeof(array[0]))
#define pb push_back

int main() {
  double fst, sec;
  cin >> fst;
  cin >> sec;
  double w_ave = (fst+sec)/2.0;
  int i_ave = (int)w_ave;
  if (((w_ave-i_ave) >= 0.5)) cout << i_ave+1 << endl;
  else cout << i_ave << endl;
  return 0;
}