#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
        v.push_back(i);
    }

    for(auto x : v) cout << " " << x;
    cout << endl;

    set<int> st(v.begin(), v.end());

    for(auto xx : st) cout << " " << xx;
    cout << endl;

    vector<int> vv {1,2,3}, naoestao;


    for(auto k : vv) if(st.insert(k).second) naoestao.push_back(k);

    if(!naoestao.size()) cout << "Esta vazio! Todos os elementos estão dentro." << endl;
    for(auto kk : naoestao) cout << kk << " ";
    cout << endl;

    

    
    return 0;
}
