def partition(arr,l,r):
    pivot = arr[l]
    i=l
    j=r
    while i<j:
        while(arr[i]<=pivot):
            i+=1
        while(arr[j]>pivot):
            j-=1
        if(i<j):
            arr[i],arr[j]=arr[j],arr[i]
    arr[j],arr[l]=arr[l],arr[j]
    return j
def quickSort(arr,l,r):
    if(l<r):
        pivot= partition(arr,l,r)
        quickSort(arr,l,pivot-1)
        quickSort(arr,pivot+1,r)
    
arr=list(map(int,input().split()))
print(arr)
quickSort(arr,0,len(arr)-1)
print(arr)