#include <bits/stdc++.h>
using namespace std;

long long digitSum(long long n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}

long long check(long long n) {
    if (n < 10) return n;
    return check(digitSum(n));
}

int main() {
    long long n;
    cin >> n;
    cout << check(n);
}