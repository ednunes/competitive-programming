#include<bits/stdc++.h>

#define MAX 1000010

using namespace std;

int coins[MAX];
int memo[MAX];

int coin_change(int V) {
    if (V == 0) return 0;
    if (V < 0) return numeric_limits<int>::min();

    if (memo[V] != -1) return memo[V];

    int n_coins = numeric_limits<int>::min();

    for(int i = 0; i < 3; ++i) {
        n_coins = max(n_coins, coin_change(V - coins[i]));
    }

    return memo[V] = n_coins + 1;
}

int main(){
    int n;
    cin >> n >> coins[0] >> coins[1] >> coins[2];
    memset(memo, -1, sizeof memo);
    cout << coin_change(n) << endl;;
    return 0;
}
