#include <bits/stdc++.h>
using namespace std;

int main() {
    int abc;
    cin >> abc;
    int c = abc % 10, b = (abc - c) % 100 / 10, a = (abc - 10 * b - c) / 100;
    cout << abc + b * 100 + c * 100 + c * 10 + a * 10 + a + b << endl;
}
