#include <bits/stdc++.h>

int main() {
  long long int n;
  std::cin >> n;
  long long sol = 0;
  for (int i = 5; n / i >= 1; i *= 5) {
    sol += n / i;
  }
  std::cout << sol;
}
