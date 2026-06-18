#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_set<long long> good;
    for(int i = 0; i < m; i++){
        long long x;
        cin >> x;
        good.insert(x);
    }

    long long count = 0;
    for(int i = 0; i < k; i++){
        if(good.count(a[i])) count++;
    }
    cout << count << " ";
    for(int i = k; i < n; i++){
        if(good.count(a[i])) count++;
        if(good.count(a[i - k])) count--;
        cout << count << " ";
    }
}
