// Problem from Codeforces
// http://codeforces.com/problemset/problem/691/A

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isFastenedRightWay(vector<int> a) {
  if (a.size() == 1) {
    if (a[0] == 1) {
      return true;
    } else {
      return false;
    }
  }

  int unfastened = 0;
  for (int i = 0 ; i < a.size() ; ++i) {
    if (a[i] == 0) {
      unfastened += 1;
    }
    if (unfastened > 1) return false;
  }
  if (unfastened == 1) return true;
  else return false;
}

int main() {
  int n = 0;
  vector<int> a;
  cin >> n;
  int number;
  for (int i = 0; i < n ; ++i) {
    cin >> number;
    a.push_back(number);
  }

  string solution = (isFastenedRightWay(a) ? "YES" : "NO");
  cout << solution;
  return 0;
}