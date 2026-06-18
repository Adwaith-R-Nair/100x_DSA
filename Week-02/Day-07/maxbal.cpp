#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ones = 0;
    int ans = 0;
    for(int i = 0; i < k; i++){
        ones += a[i];
    }
    ans = min(ones + 1, k);
    for(int i = k; i < n; i++){
        ones += a[i];
        ones -= a[i - k];
        ans = max(ans, min(ones + 1, k));
    }
    cout << ans;

}