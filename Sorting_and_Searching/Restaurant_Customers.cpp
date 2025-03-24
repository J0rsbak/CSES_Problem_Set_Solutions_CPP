#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;

  std::map<int, std::vector<int>> aux;
  for (int i = 0; i < n; i++) {
    int a, b;
    std::cin >> a >> b;
    aux[a].push_back(i);
    aux[b].push_back(i);
  }

  int sol = 0;
  std::unordered_set<int> curr;

  for (auto c : aux) {
    if (curr.empty()) {
      curr.insert(c.second.begin(), c.second.end());
    } else {
      for (int i = 0; i < c.second.size(); i++) {
        if (curr.find(c.second[i]) != curr.end()) {
          curr.erase(c.second[i]);
        } else {
          curr.insert(c.second[i]);
        }
      }
    }
    sol = std::max(sol, (int)curr.size());
  }

  std::cout << sol << '\n';

  return 0;
}
