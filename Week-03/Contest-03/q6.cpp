#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int i, int current, set<int> &results){
    if(i == a.size()){
        results.insert(current);
        return;
    }
    solve(a, i + 1, current + a[i], results);
    solve(a, i + 1, current - a[i], results);
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set <int> results;
    solve(a, 1, a[0], results);
    cout << results.size();
}