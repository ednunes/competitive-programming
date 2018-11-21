#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    set<char> st;

    for(auto c : s)
        if((c >= 97 and c<= 122) or (c >= 65 and c<= 90))
            st.insert(c);

    cout << st.size() << "\n";

    return 0;
}
