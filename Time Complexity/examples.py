a = 0 
b= 0
for i in range(N):
    a = a + random()
for j in range(M):
    b = b + random()

a = 0;
for i in range(N):
  for j in reversed(range(i,N)):
    a = a + i + j;
