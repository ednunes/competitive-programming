#include<bits/stdc++.h>

using namespace std;
int v[3][3] = {{1,1,1},{1,1,1},{1,1,1}};


void sw(int i, int j){
    if(i+1<3) v[i+1][j]=!v[i+1][j];
    if(i-1>=0) v[i-1][j]=!v[i-1][j];
    if(j+1<3) v[i][j+1]=!v[i][j+1];
    if(j-1>=0) v[i][j-1]=!v[i][j-1];
    v[i][j]=!v[i][j];
}

void p(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << v[i][j];
        } 
        cout << "\n";
    }
}

int main(){
    int x;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> x;
            if(x!=0 and x&1) sw(i,j);
        } 
    }
    p();
    return 0;
}
