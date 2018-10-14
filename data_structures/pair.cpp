#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

int main(){

    vector<ii> v;
    for(int i = 0; i < 15; ++i){
        ii xx(i,15-i);
        v.push_back(xx);
    }
    for(int j = 0, size = v.size(); j < size; ++j)
        cout << v[j].first << " " << v[j].second << endl;
    return 0;
}
