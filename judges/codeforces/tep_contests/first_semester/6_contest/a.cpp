#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int x = 0;
    int size = s.size();
    string h = "hello";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < size; j++){
            if(s[j]=='h'){
                x++;
                break;
            } else if(x>1 and s[i]==s[j]){
                x++;
                break;
            }
        }
    }
    if(x >= 5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
