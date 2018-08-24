#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;

    cin >> n;

    while(n--){
        cin >> s;
        auto size = s.size();
        size > 10 ? cout << s[0] << size-2 << s[size-1] << endl : cout << s << endl;
    }

    return 0;
}
