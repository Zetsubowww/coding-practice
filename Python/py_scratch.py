"""word = "([{(())}])"
x = len(word) - 1

for i in range(len(word) -1, -1, -1):
    print(word[i], word[i - x])
    x -= 2

    if i == len(word) // 2:
        break

for char in word:
    print(word)"""