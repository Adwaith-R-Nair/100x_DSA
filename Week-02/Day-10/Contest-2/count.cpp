#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    int count = 0;
    for(int l = 0; l < n; l++){
        long long sum = 0;
        for(int r = l; r < n; r++){
            sum += a[r];
            if(sum == k){
                count += 1;
            }
        }
    }
    cout << count;

}