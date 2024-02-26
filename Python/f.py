list = []
ap=[]
n = int(input())
for i in range(0, len(n)):
    num = int(input())
    list = num.append(num)
for j in range(len(n)):
    if list.max()==list[j]:
        continue
    else:
        ap.append(j)
# for max element
print(ap.max())

    
    