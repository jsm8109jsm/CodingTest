n = int(input())

wordList = [[] for _ in range(51)]

for i in range(n):
    word = input()
    if word not in wordList[len(word)]:
        wordList[len(word)].append(word)

for i in wordList:
    i.sort()

for i in wordList:
    for j in i:
        print(j)