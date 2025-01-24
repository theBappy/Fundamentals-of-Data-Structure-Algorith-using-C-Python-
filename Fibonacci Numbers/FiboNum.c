//  Implementation Using a For Loop
#include <stdio.h>

int main(){
    int prev2 = 0, prev1 = 1;
    int newFibonacci;

    printf("%d\n", prev2);
    printf("d\n", prev1);

    for (int fibonacci = 0; fibonacci < 18; fibonacci++)
    {
        newFibonacci = prev1 + prev2;
        printf("%d\n", newFibonacci);
        prev2 = prev1;
        prev1 = newFibonacci;
    }
    return 0;
}




// Implementation Using Recursion
#include <stdio.h>
int count = 2;

void fiboNacci(int prev1, int prev2){
    if(count <= 19){
        int newFibonacci = prev1 + prev2;
        printf("%d\n", newFibonacci);
        prev2 = prev1;
        prev1 = newFibonacci;
        count += 1;
        fiboNacci(prev1, prev2);
    }
    return;
}
int main(){
    printf("0\n");
    printf("1\n");
    fiboNacci(1,0);

    return 0;
}



// Finding The 'nth' Fibonacci Number Using Recursion
#include<stdio.h>

int F(int n){
    if(n<=1){
        return n;
    }
    else {
        return F(n-1) + F(n-2);
    }
}
int main(){
    printf("%d\n", F(19));
    return 0;
}