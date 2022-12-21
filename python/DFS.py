n, m, v = map(int, input().split())

visited = (n + 1) * [False]

g = [[0 for col in range(n + 1)] for row in range(n + 1)]

for i in range(m):
	a, b = map(int, input().split())
	g[a][b] = 1
	g[b][a] = 1
	
def DFS(v):
	visited[v] = True
	print(v, end=" ")
	for i in range(1, n + 1):
		if visited[i] == False and g[v][i] == 1:
			DFS(i)
	
DFS(v)