#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, r, z, sss="";
    cin >> s >> r >> z;
    s = s+r;
    for(int i = 0, size = s.size(); i < size; i++){
        for(int j = 0, ss = z.size(); j < ss; j++){
            if(s[i]==z[j]){
                sss+=z[j];
                break;
            }
        }
    } 

    (z.size()!=sss.size()) ? cout << "NO" << endl : cout << "YES" << endl; 
    return 0;
}
