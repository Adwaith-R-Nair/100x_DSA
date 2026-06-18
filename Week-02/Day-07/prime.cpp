#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int count = 0;
    int start = 0;
    for(int i = 0; i < k; i++){
        if (isPrime(a[i])){
            count += 1;
        }
    }
    int mx = count;
    for(int i = k; i < n; i++){
        if(isPrime(a[i])){
            count += 1;
        }
        if(isPrime(a[i - k])){
            count -= 1;
        }
        if (count > mx){
            mx = count;
            start = i - k + 1;
        }
    }
    for (int i = start; i < start + k; i++){
        cout << a[i] << " ";
    }
}