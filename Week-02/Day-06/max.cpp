#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int l = 0; l < n; l++){
        int m = a[l];
        for(int r = l; r < n; r++){
            m = max(m, a[r]);
            cout << m << endl;
        }
    }
}