l=list(map(int,input().split()))
for i in range(len(l)):
    temp=l[i]
    index=i
    for j in range(i,len(l)):
        if(l[j]<temp):
            temp=l[j]
            index=j
    l[i],l[index]=l[index],l[i]
print(l)