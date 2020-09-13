#include <bits/stdc++.h>

using namespace std;

int a_size, b_size;
int a[2000], b[2000];
int memo[2000][2000];
int inf = numeric_limits<int>::max() / 2;
vector<int> indexes;

int solve(int i, int j){
    if(i == a_size || j == b_size) return 0; //base da recursão
    if(memo[i][j] != -1) return memo[i][j]; // se calculado retorna se n calcula

    memo[i][j] = 0;
    if(a[i] == b[j])
        memo[i][j] = max(memo[i][j], 1 + solve(i + 1, j + 1)); // não escolhe vs escolhe.

    memo[i][j] = max({memo[i][j], solve(i+1, j), solve(i, j+1)}); // resultado anterior vs solução para pointer i+1 vs solução para pointer j+1.
    return memo[i][j];
}

void recover(int i, int j){
    if(i == a_size || j == b_size) return;
    int pega, passa1, passa2;

    if(a[i] == b[j]){
        pega = 1 + solve(i+1, j+1);
    }else{
        pega = -inf;
    }

    passa1 = solve(i+1, j);
    passa2 = solve(i, j+1);

    if(pega >= passa1 && pega >= passa2){
        indexes.push_back(a[i]);
        recover(i+1, j+1);
    }else if(passa1 >= passa2){
        recover(i + 1, j);
    }else{
        recover(i , j + 1);
    }
}

int main()
{
    cin >> a_size >> b_size; // 2000, 2000 malloc a and b
    memset(memo, -1, sizeof(memo));
    for (int i=0;i<a_size;i++){
        cin >> a[i];
    }
    for (int i=0;i<b_size;i++){
        cin >> b[i];
    }

    cout << solve(0, 0) << endl;
    recover(0, 0);

    for(int i=0;i<indexes.size();i++){
        cout << indexes[i] << " ";
    }

    return 0;
}
