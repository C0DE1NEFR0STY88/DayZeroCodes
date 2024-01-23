import sys

arr = list(map(int, input().split())) #integer array in python
print ("The number of elements in array is", (sys.getsizeof(arr)/sys.getsizeof(arr[0])))
print ("The number of elements in array is", len(arr))
print ("The size of array is", sys.getsizeof(arr), "bytes. With each element taking", sys.getsizeof(arr[0]), "bytes.")
print(arr[0]+arr[1])
arr.sort()
print (arr)


"""
import sys
a = int(10)
b = float(10)
a_rr = list(map(int, input().split()))
b_rr = list(map(float, input().split()))
print (sys.getsizeof(a), sys.getsizeof(b), sys.getsizeof(a_rr), sys.getsizeof(b_rr)) #gives o/p: 28 24 88 88
"""
