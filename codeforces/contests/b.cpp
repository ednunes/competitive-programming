#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    stack<int> st;
    vector<int> v, vvv;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }
    int c = 0;
    map<int,int> m;
    vector<int> vv;
    for(int j = v.size()-1; j >= 0; j--){
        st.push(v[j]);
        cin >> x;
        vvv.push_back(x);
    }
    for(int i = 0; i < n; ++i){
        x = vvv[i];
        if(m[x]>0){
            c=0;
            cout << "entrou" << endl;
        } else {
            while(x==st.top()){
                st.pop();
                m[x]++;
                c++;
            }
            c++;
        }
        cout << c << " " << st.top() << endl;
        vv.push_back(c);
        c = 0;
    }

    for(auto k : vv) cout << k << " ";
    cout << "\n";
    return 0;
}
