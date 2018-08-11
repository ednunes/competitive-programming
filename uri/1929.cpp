#include <bits/stdc++.h>

using namespace std;

bool make_tr(int a, int b, int c){
    if((a+b)>c and abs(a-b)<c){
        return true;
    }
    else if((b+c)>a and abs(b-c)<a){
        return true;
    }
    else if((a+c)>b and abs(a-c)<b){
        return true;
    }
    return false;
}

int main(){
    int v[4];
    for(int i = 0; i < 4; ++i)
        cin >> v[i];

    if(make_tr(v[0], v[1], v[2]) or make_tr(v[1], v[2], v[3]) or make_tr(v[0], v[2], v[3]) or make_tr(v[0], v[1], v[3]))
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
