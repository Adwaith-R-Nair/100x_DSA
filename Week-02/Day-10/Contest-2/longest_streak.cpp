#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    unordered_set<int> window;
    int l = 0, ans = 0;

    for(int r = 0; r < n; r++){
        while(window.count(a[r])){
            window.erase(a[l]);
            l++;
        }
        window.insert(a[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans;
}