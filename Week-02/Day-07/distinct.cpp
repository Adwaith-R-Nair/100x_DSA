#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    unordered_map<long long, int> freq;

    for(int i = 0; i < k; i++){
        freq[a[i]]++;
    }
    cout << freq.size() << " ";

    for(int i = k; i < n; i++){
        freq[a[i]]++;
        freq[a[i - k]]--;
        if(freq[a[i - k]] == 0){
            freq.erase(a[i - k]);
        }
        cout << freq.size() << " ";
    }
}
