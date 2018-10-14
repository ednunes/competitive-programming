#include <bits/stdc++.h>

using namespace std;
typedef queue<string> q;

int main(){
    q f;
    f.push("I ");
    f.push("Love ");
    f.push("You");
    f.push("!");

    cout << "First element " << f.front() << "\n";
    cout << "Last element " << f.back() << "\n";
    cout << "Queue size " << f.size() << "\n";
    cout << "Is empty " << f.empty() << "\n";

    for(int i = 0, size = f.size(); i < size; ++i){
        cout << f.front();
        f.pop();
    }
    cout << "\n";

    return 0;
}
