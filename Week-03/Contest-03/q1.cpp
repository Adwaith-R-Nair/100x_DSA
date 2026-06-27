#include <bits/stdc++.h>
using namespace std;

int countZeros(long long n){
    if(n == 0) return 0;
    int current = 0;
    if(n % 10 == 0) current = 1;
    return current + countZeros(n / 10);
}

int main(){
    long long n;
    cin >> n;
    if(n == 0) cout << 1;
    else cout << countZeros(n);
}
