s=input("Enter:")
l=[]
a=[3,4,53,5,354]
for i in range(len(s)):
    a=s[i]
    l.append(a)
    for j in range(i+1,len(s)):
        a+=s[j]
        l.append(a)
l=sorted(set(l))
print(l)