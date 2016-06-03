#include <iostream>
#include <string>
using namespace std;
int main() {
  char d;
  string key[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"}, s, p;
  cin >> d >> s;
  int a = (d == 'L' ? 1 : -1);
  for (char& c : s) {
    for (string& k : key) {
      int f = k.find(c);
      if (f != -1) {
        cout << k.at(f + a);
        break;
      }
    }
  }
}
