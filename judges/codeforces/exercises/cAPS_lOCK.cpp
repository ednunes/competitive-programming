#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string x = s;
    int count = 0;

    int size = s.size();
    for(int i = 0; i < size; ++i){
        if(s[i]<'a'){
            x[i]+=32;
            ++count;
        }
    }
    if(count == size) cout << x << endl;
    else if(s[0]>='a' && count >= size-1){ x[0]-=32; cout << x << "\n"; }
    else cout << s << endl;

    return 0;
}
