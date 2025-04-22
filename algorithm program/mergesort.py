def mergesort(array):
    if len(array)>1:
        r=len(array)//2
        l=array[:r]
        m=array[r:]
        mergesort(l)
        mergesort(m)
        i=j=k=0
        while i<len(l) and j<len(m):
            if l[i]< m[j]:
                array[k]=l[i]
                i+=1
            else :
                array[k]=m[j]
                j+=1
            k+=1
        while i< len(l):
            array[k]=l[i]
            i+=1
            k+=1
        while j<len(m):
            array[k]=m[j]
            j+=1
            k+=1

def printlist(array):
    for i in range (len(array)):
        print(array[i], end=" ")
    print()


if __name__=="__main__":
    array = [5,7,3,2,67,2,7]
    mergesort(array)
    print("sorted array : ")
    printlist(array)
