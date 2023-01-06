import sys
from collections import deque

n = int(input())

q = deque()

for i in range(n):
    VPS = sys.stdin.readline().rstrip()
    flag = False
    for j in VPS:
        if j == '(':
            q.append(j)
        else:
            if q:
                q.popleft()
            else:
                print('NO')
                flag = True
                break
    if q:
        print('NO')
    elif not q and not flag:
        print('YES')
    q.clear()