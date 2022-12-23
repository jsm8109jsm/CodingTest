n = int(input())

nList = list(map(int, input().split()))

m = int(input())

mList = list(map(int, input().split()))

nList.sort()

def Search(start, end, key):
	if(start <= end):
		mid = (start + end) // 2
		if(key == nList[mid]):
			print(1)
			return
		elif(key > nList[mid]):
			Search(mid + 1, end, key)
		elif(key < nList[mid]):
			Search(start, mid - 1, key)
	else:
		print(0)
		return

for i in mList:
	Search(0, m-1, i)