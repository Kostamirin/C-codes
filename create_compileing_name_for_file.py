a = input("Enter problem name: ")

for i in range(len(a) - 1):
    if a[i] == " ":
        a = a[:i] + "-" + a[i+1:]
    elif a[i] == ".":
        a = a[:i+1] + a[i+2:]
    elif a[i-1] == "-" and a[i] == "-":
        a = a[:i] + a[i+1:]

print()
print("---ANSWER---")
print()
print(a)
print()