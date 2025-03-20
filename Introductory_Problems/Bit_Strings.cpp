#include <bits/stdc++.h>

const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
  long long result = 1;
  while (exp > 0) {
    if (exp % 2 == 1) {
      result = (result * base) % mod;
    }
    base = (base * base) % mod;
    exp /= 2;
  }
  return result;
}

int main() {
  long long n;
  std::cin >> n;
  std::cout << power(2, n, MOD) << '\n';
  return 0;
}
