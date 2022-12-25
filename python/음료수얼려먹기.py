n, m = map(int, input().split())

g = []

for i in range(n):
	g.append(list(map(int, input().split())))
	
def DFS(x, y):
	if x >= n or x <= -1 or y <= -1 or y >= m:
		return False
	if g[x][y] == 0:
		g[x][y] = 1
		DFS(x + 1, y)
		DFS(x - 1, y)
		DFS(x, y + 1)
		DFS(x, y - 1)
		return True
	return False

count = 0

for i in range(n):
	for j in range(m):
		if DFS(i, j):
			count += 1
			
print(count)