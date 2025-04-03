N=int(input())
x=[]
for _ in range(N):
    x.append(list(map(int,input().split())))
x.sort(key=lambda pair: (pair[0],pair[1]))

for pair in x:
    print(pair[0],pair[1])
