#include <bits/stdc++.h>
using namespace std;

void f(vector<int>&a, int i){
    cout << a[i] << " ";
    if (i > 0){
        f(a, i - 1);
        cout << a[i] << " ";
    }
}

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    f(a, n - 1);
}