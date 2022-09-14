from itertools import combinations
s='abc'
l=[]
for i in range(len(s)+1):
    l+=combinations(s,i)
print(*list(l),sep='\n')