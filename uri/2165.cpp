#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    (s.size()<=140) ? cout << "TWEET" << endl :  cout << "MUTE" << endl;
    return 0;
}
