INF = 1e9

n = int(input())

m = int(input())

g = [[INF for _ in range(n + 1)] for _ in range(n + 1)]

for _ in range(m)
	a, b, c = map(int, input().split())
	g[a][b] = c

for i in range(1, n + 1)
	for j in range(1, n + 1)
		if i == j
			g[i][j] = 0
		
for k in range(1, n + 1)
	for i in range(1, n + 1)
		for j in range(1, n + 1)
			g[i][j] = min(g[i][j], g[i][k] + g[k][j])
			
for i in range(1, n + 1)
	for j in range(1, n + 1)
		print(g[i][j], end=' ')
	print()