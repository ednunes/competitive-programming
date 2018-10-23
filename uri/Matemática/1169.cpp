#include <bits/stdc++.h>

using namespace std;

int main(){

    int tc;

    scanf("%d", &tc);

    while(tc--){

        int a;
        scanf("%d", &a);

        double sum = 1;
        double before;

        for(int i = 1; i <= a; i++){
            before = sum;
            sum = before * 2;
        }

        printf("%.0lf kg\n", floor((sum/12)/1000));

    }

    return 0;
}
