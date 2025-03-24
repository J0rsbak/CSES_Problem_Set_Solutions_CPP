#include <bits/stdc++.h>
int main() {
  int n;
  std::cin >> n;
  long long aux;
  std::set<long long> sol;
  while (n--) {
    std::cin >> aux;
    sol.insert(aux);
  }
  std::cout << sol.size();
}
