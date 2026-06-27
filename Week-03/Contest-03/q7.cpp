#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int i, int balance, vector<string> &results) {
    if (balance < 0) return;
    if(i == s.size()){
        if(balance == 0) results.push_back(s);
        return;
    }
    if (s[i] == '('){
        solve(s, i + 1, balance + 1, results);
    } else if (s[i] == ')'){
        solve(s, i + 1, balance - 1, results);
    } else {
        s[i] = '(';
        solve(s, i + 1, balance + 1, results);
        s[i] = ')';
        solve(s, i + 1, balance - 1, results);
        s[i] = '?';
    }
}

int main() {
    string s;
    cin >> s;
    vector<string> results;
    solve(s, 0, 0, results);
    if(results.empty()){
        cout << 0;
    } else {
        cout << results.size() << "\n";
        for(auto &r: results) {
            cout << r << "\n";
        }
    }
}