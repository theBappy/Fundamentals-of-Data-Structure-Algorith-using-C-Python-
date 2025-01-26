int a = 0, b = 0;
for(int i = 0; i< N; i++){
    a = a + rand()
}
for(int j = 0; j<M; j++)
{
    b = b + rand()
}
// The first loop is O(N) and the second loop is O(M).Since N and M are independent variables, so we can’t say which one is the leading term.Therefore Time complexity of the given problem will be O(N + M).Since variables size does not depend on the size of the input, therefore Space Complexity will be constant or O(1)

                                                                                                                                                                                                                                                                                                                            int = 0;
for(i = 0; i< N; i++){
    for(j = N; j> i; j--){
        a = a + i + j;
    }
}
//  O(n^2)

int i , j , k = 0;
for(i = n/2; i <= n; i++){
    for(j = 2; j<=n; j= j*2){
        k = k + n/ 2;
    }
}

// O(nlogn)

int a =0, i = N;
while(i > 0){
    a += i;
    i /=2;
}
// O(logN)

void function(int n){
    int i = 1, s = 1;
    while(s < n){
        s = s + 1;
        i++;
    }
}
// O(root n)

void fun(int n)
{
    if (n < 5)
        printf("hello world");
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", i);
        }
    }
}

// O(1) and O(n)

void fun(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
}
// Time complexity = O(1) in best case and O(max(a, b)) worst case

void fun(int n)
{
    for (int i = 0; i * i < n; i++)
        printf("%s", "hello");
}
//  O(root n)

void fun(int n , int x){
    for(int i = 1; i<n; i = i *x){
        printf("hello world")
    }
}
//  O(logxn)

void fun(int n)
{
    for (int i = 0; i < n / 2; i++)
        for (int j = 1; j + n / 2 <= n; j++)
            for (int k = 1; k <= n; k = k * 2)
                printf("hello world");
}

int main()
{
    int n = 8;
    fun(3);
}

// Time complexity of 1st for loop = O(n/2) ⇒ O(n).
// Time complexity of 2nd for loop = O(n/2) ⇒ O(n).
// Time complexity of 3rd for loop = O(log2n).                                    
// Hence, the time complexity of function will become O(n2log2n).

void fun(int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j = j + i)
            print("hello world");
}

// Time complexity of 1st for loop = O(n). 2nd loop executes n/i times for each value of i.
// Its time complexity is O(∑ni = 1 n / i) ⇒ O(logn).Hence, time complexity of function = O(nlogn).

void fun(int n)
{
    for (int i = 0; i <= n / 3; i++)
        for (int j = 1; j <= n; j = j + 4)
            cout << "hello";
}
// Time complexity of 1st for loop = O(n/3) ⇒ O(n).
// Time complexity of 2nd for loop = O(n/4) ⇒ O(n).
// Hence, the time complexity of function will become O(n2).

void fun(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = n;
        while (j > 0)
        {
            j = j / 2;
        }
        i = i * 2;
    }
}

// In each iteration , i become twice (T.C=O(logn)) and j become half (T.C=O(logn)). So, time complexity will become O(log2n).
// We can convert this while loop into for loop.
//     for( int i = 1; i < n; i = i * 2)
//     for( int j=n ; j > 0; j = j / 2).

// Time complexity of above for loop is also O(log2n).

void fun(int n)
{
    int j = 1;
    while (j <= n)
    {
        j = j * 2;
    }
}

// Let k be the no. of iteration of the loop. After the kth step, the value of j is 2k. Hence, k=log2n. Here, we use ceil of log2n, because log2n may be in decimal. Since we are doing one more comparison for exiting from the loop.
// So, the answer is ceil(log2n)+1.