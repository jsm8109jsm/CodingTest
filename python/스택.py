import sys

n = int(input())

q = list()

for i in range(n):
  a = sys.stdin.readline().rstrip()
  if a == 'pop':
    if q:
      print(q.pop())
    else:
      print(-1)
  elif a == 'size':
    print(len(q))
  elif a == 'empty':
    if q:
      print(0)
    else:
      print(1)
  elif a == 'top':
    if q:
      print(q[-1])
    else:
      print(-1)
  else:
    push = a.split(' ')
    q.append(int(push[1]))
