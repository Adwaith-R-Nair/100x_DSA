#include <bits/stdc++.h>
using namespace std;

bool isVowel(char s){
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long count = 0;
    for(int i = 0; i < k; i++){
        if (isVowel(s[i])){
            count += 1;
        }
    }
    cout << count << " ";

    for(int i = k; i < n; i++){
        if (isVowel(s[i])){
            count += 1;
        }
        if(isVowel(s[i - k])){
            count -= 1;
        }
        cout << count << " ";
    }

}