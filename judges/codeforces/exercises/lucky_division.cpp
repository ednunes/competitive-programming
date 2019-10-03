#include<bits/stdc++.h>

using namespace std;

vector<int> luckys = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

bool is_lucy(int x){
    for(int i = 0, size = luckys.size(); i < size; i++)
        if((x%luckys[i])==0) return true;
    return false;
}

int main(){
    int x;
    cin >> x;
    if(is_lucy(x)==true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
