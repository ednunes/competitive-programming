#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> id;
    int size = s.size();

    for(int i = 0; i < size; i++){
        id.insert(s[i]);
    }
    

    (id.size()%2==0) ?  cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
    
    
    return 0;
}
