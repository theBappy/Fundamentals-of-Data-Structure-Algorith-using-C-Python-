# Implementation Using a For Loop
prev2 = 0
prev1 = 1

print(prev2)
print(prev1)

for fibonacci in range(18):
    newFibonacci = prev1 + prev2
    print(newFibonacci)
    prev2 = prev1
    prev1 = newFibonacci


# Implementation Using Recursion
print(0)
print(1)
count = 2

def fibonacci(prev1, prev2):
    global count
    if count <= 19:
        newFibonacci = prev1 + prev2
        print(newFibonacci)
        prev2 = prev1
        prev1 = newFibonacci
        count += 1
        fibonacci(prev1, prev2)
    else:
        return
fibonacci(1,0)


# Finding The 'nth' Fibonacci Number Using Recursion
def F(n):
    if n <= 1:
        return n
    else:
        return F(n-1) + F(n-2)
print(F(19))

