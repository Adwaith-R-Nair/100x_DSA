#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    vector<pair<int,int>> boundary;

    for(int i = n-1; i >= 0; i--)
        boundary.push_back({i, 0});

    for(int j = 1; j < m; j++)
        boundary.push_back({0, j});

    for(int i = 1; i < n; i++)
        boundary.push_back({i, m-1});

    for(int j = m-2; j >= 1; j--)
        boundary.push_back({n-1, j});

    for(auto [r, c] : boundary){
        if(grid[r][c] == -1) break;
        cout << grid[r][c] << " ";
    }
}
