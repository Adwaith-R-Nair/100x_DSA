#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    long long t;
    cin >> n >> k >> t;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int count = 0;
    long long sum = 0;
    for(int l = 0; l <k; l++){
        sum += a[l];
    }
    if(sum >= t * k){
        count ++;
    }
    for(int l = k; l < n; l++){
        sum += a[l];
        sum -= a[l - k];
        if(sum >= t * k){
        count ++;
        }
    }
    cout << count;
}