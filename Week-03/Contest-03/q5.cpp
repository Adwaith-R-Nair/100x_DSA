#include <bits/stdc++.h>
using namespace std;

void solve(int rem, vector<int> &current) {
    if (rem == 0){
        for(int i = 0; i < current.size(); i++){
            if (i > 0) cout << " ";
            cout << current[i];
        }
        cout << "\n";
        return;
    }
    for(int dice = 1; dice <= 6; dice++){
        if(dice > rem){
            break;
        }
        current.push_back(dice);
        solve(rem - dice, current);
        current.pop_back();
    }
}

int main() {
    int k;
    cin >> k;
    vector <int> current;
    solve(k, current);
}