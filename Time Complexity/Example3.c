// Consider the recursive algorithm below, where the random(int n) spends one unit of time to return a random integer where the probability of each integer coming as random is evenly distributed within the range [0,n]. If the average processing time is T(n), what is the value of T(6)?

#include<stdio.h>

int random(int a){
    int i ;
    int num = (rand() % (a+1));
    return num;
}

int function(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}

int main(){
    function(6);
    return 0;
}

// Question 4 : Which of the following are equivalent to O(N) and why ?

//                                                                    O(N + P),
//     where P < N / 9 0(9N - k)
//                       O(N + 8log N)
//                           O(N + M2)

// Ans - first three
