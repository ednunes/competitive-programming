#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int soma = 0;
    string s; cin >> s; int last = 'a';
    for(const auto &c : s) { 
        int x = c;
        soma+=min(abs(x-last), abs(26+min(x,last)-max(x,last)));
        last = c;
    }
    cout << soma << "\n";
    


    return 0;
}
