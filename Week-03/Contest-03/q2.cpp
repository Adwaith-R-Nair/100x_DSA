#include <bits/stdc++.h>
using namespace std;

long long f(int n, long long a, long long b, long long c){
    if(n == 0) return a;
    if(n == 1) return b;
    if(n == 2) return c;
    return f(n - 1, a, b, c) + f(n - 3, a, b, c);
}

int main (){
    long long a, b, c;
    int n;

    cin >> a >> b >> c >> n;
    cout << f(n, a, b, c);
}