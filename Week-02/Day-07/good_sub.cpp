#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, t;
    cin >> n >> k >> t;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long sum = 0;
    long long count = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    long long ans = sum;
    long long avg = sum / k;
    if (avg >= t){
        count += 1;
    }

    for(int i = k; i < n; i++){
        ans += a[i];
        ans -= a[i - k];
        avg = ans / k;
        if(avg >= t){
            count += 1;
        }
    }
    cout << count;
}