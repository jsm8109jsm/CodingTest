from collections import deque

n, m, v = map(int, input().split())

visited = [False] * (n + 1)

g = [[0 for _ in range(n + 1)]for _ in range(n + 1)]

for i in range(m):
	a, b = map(int, input().split())
	g[a][b] = 1
	g[b][a] = 1
	
q = deque([v])
visited[v] = True
while q:
	a = q.popleft()
	print(a, end=' ')
	for i in range(1, n + 1):
		if not visited[i] and g[a][i] == 1:
			visited[i] = True
			q.append(i)
	