def selectionsort (arr):
    for i in range(0, len(arr)-1):
        index = i
        for j in range(i, len(arr)):
            if arr[index] > arr[j]:
                index = j
        temp = arr[i]
        arr[i] = arr[index]
        arr[index] = temp
        #print(arr)
    return arr

# Test
#print(selectionsort([5,10,1,2,3,5,5,9,231,52]))