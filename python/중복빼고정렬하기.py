n = int(input())

nList = list(map(int, input().split()))

nSet = set(nList)

for i in sorted(nSet):
    print(i, end=' ')