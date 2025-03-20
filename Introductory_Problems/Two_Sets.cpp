#include <bits/stdc++.h>
int main() {
  long long n;
  std::cin >> n;
  long long sum = n * (n + 1) / 2;
  if (sum % 2) {
    std::cout << "NO\n";
    return 0;
  }
  std::vector<long long> set1;
  std::vector<long long> set2;
  sum /= 2;
  for (int i = n; i > 0; i--) {
    if (sum - i >= 0) {
      set1.push_back(i);
      sum -= i;
    } else {
      set2.push_back(i);
    }
  }
  std::cout << "YES\n";
  std::cout << set1.size() << "\n";
  for (int num : set1) {
    std::cout << num << " ";
  }
  std::cout << "\n";

  std::cout << set2.size() << "\n";
  for (int num : set2) {
    std::cout << num << " ";
  }
  std::cout << "\n";
}
