n = int(input())

for _ in range(n):
    R, word = input().split()
    for i in word:
        print(i*int(R), end='')
    print()