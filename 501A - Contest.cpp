#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a = max(3 * a / 10, a - a / 250 * c);
  b = max(3 * b / 10, b - b / 250 * d);
  cout << (a == b ? "Tie" : (a > b ? "Misha" : "Vasya"));
}
