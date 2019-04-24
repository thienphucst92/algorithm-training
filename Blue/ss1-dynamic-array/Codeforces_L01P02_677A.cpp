#include <iostream>
#include <vector>

using namespace std;

int calculateWidth(vector<int> a, int h) {
  int width = 0;
  for (vector<int>::iterator it = a.begin(); it != a.end() ; it += 1) {
    if (*it > h) {
      width += 2;
    } else {
      width += 1;
    }
  }
  return width;
}

int main() {
  int n = 0, h = 0;
  cin >> n >> h;
  vector<int> a;
  int number;
  for (int i = 0 ; i < n ; i += 1) {
    cin >> number;
    a.push_back(number);
  }

  cout << calculateWidth(a, h);

  return 0;
}
