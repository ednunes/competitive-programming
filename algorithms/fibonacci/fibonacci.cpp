// Works for numbers 0 < numbers <= 94;


#include <bits/stdc++.h>

using namespace std;
#define MAX 1000

unsigned long long int memo[1000];

unsigned long long int fibonacci(int n){
    if (memo[n]!=-1){
        return memo[n];
    }
    else if(n==1 or n==2)
    {
        return memo[n]=1;
    }
    else if (n<=0)
    {
        return memo[n]=0;
    }
    else
    {
        memo[n] = (fibonacci(n-1) + fibonacci(n-2));
        return memo[n];
    }
}


int main(){
    int number;
    scanf("%d", &number);
    memset(memo, -1, sizeof memo);

    printf("The %d number of fibonacci sequence is: %llu.\n", number, fibonacci(number));
    printf("The sequence is: 0 1 ");

    for(int i = 0; i < MAX; i++){
        if(memo[i]!=-1)
        {
            printf("%llu ", memo[i]);
        }
    }
    printf("\n");

    return 0;
}
