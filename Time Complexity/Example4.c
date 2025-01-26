// The following simple code sums the values of all the nodes in a balanced binary search tree(don’t worry about what it is, we’ll learn them later).What is its runtime ?

int sum(Node node)
{
    if (node == NULL)
    {
        return 0;
    }
    return sum(node.left) + node.value + sum(node.right);
}

// O(n)

// Question 6: Find the complexity of the following code which tests whether a given number is prime or not?

int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// O(√n)


// What is the time complexity of the following snippet of code ? int isPrime(int n)
{
    for (int i = 2; i * i < 10000; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
isPrime();

// O(1)