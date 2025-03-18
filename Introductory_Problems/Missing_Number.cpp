#include <bits/stdc++.h>
int main()
{
    long long int n;
    long long int aux;
    std::cin >> n;
    long long int sum = n * (n + 1) / 2;
    for (int i = 1; i < n; i++)
    {
        std::cin >> aux;
        sum -= aux;
    }
    std::cout << sum;
}
