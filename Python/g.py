liste = []
n = int(input("Enter the number of elements in the list: "))
for i in range(n):
    num = int(input("Enter element: "))
    liste.append(num)

slist = sorted(liste)
del slist[-1]
runnerup = max(slist)
print(runnerup)