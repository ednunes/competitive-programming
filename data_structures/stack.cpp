#include <bits/stdc++.h>

using namespace std;
typedef stack<string> p;

int main(){
    p st;
    st.push("!");
    st.push("You");
    st.push("Love ");
    st.push("I ");

    for(int i = 0, size = st.size(); i < size; ++i){
        cout << st.top();
        st.pop();
    }
    cout << "\n";
    !st.size() ? cout << "Is empty" << "\n" : cout << "Is not empty" << "\n";
    return 0;
}
