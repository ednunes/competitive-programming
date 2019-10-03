#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont = 0;
    int x1, y1, x2, y2;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2), x1 && x2 && y1 && y2){

        // diagonal é dada pela soma de x
        // horizontal e vertical é dado caso x1 e x2 ou y1 e y2 são iguais

        if(x1 == x2 && y1 == y2){
            printf("0\n");
        }else if(x1 == x2 || y1 == y2 || x1+y2 == y1+x2 || x1 + y1 == x2 + y2){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }

    return 0;
}
