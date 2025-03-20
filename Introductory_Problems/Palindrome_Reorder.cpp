#include <bits/stdc++.h>

int main() {
  std::string s;
  std::cin >> s;
  std::unordered_map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }
  char oddChar = '\0';
  std::string half = "";
  int oddCount = 0;
  for (auto &[ch, count] : freq) {
    if (count % 2 == 1) {
      oddChar = ch;
      oddCount++;
    }
    if (oddCount > 1) {
      std::cout << "NO SOLUTION\n";
      return 0;
    }
    half += std::string(count / 2, ch);
  }
  std::string revHalf = half;
  std::reverse(revHalf.begin(), revHalf.end());
  std::cout << half;
  if (oddChar) {
    std::cout << oddChar;
  }
  std::cout << revHalf << "\n";
  return 0;
}
