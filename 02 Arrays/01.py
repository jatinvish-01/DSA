# import array as arr   
from array import *
val = array('i',[1,2,3,4,5,6])

# for i in val:
#       print(i*2, end=" ")

# for i in range(0,7):
#       print(i, end=", ")

# for i in range(0, len(val)):
#       print(i, end=" ")

# print("\n")
# print(val.typecode) # 'i'

# # to reverse the array
# # val.reverse()

# # for i in range(len(val)):
# #       print(val[i], end=" ")

# print("\n")
# # inserting element in arr
# val.insert(2, 30)
# val.append(200)
# val[4] = 400

# for i in range(len(val)):
#       print(val[i], end=" ")

# make copy array

# copyArray = array(val.typecode, (x*3 for x in val))
# for i in range(len(copyArray)):
#       print(copyArray[i], end=" ")
# print("\n--------------------")
# # tto delete an element

# copyArray.pop(2)
# for i in range(len(copyArray)):
#       print(copyArray[i], end=" ")

# print("\n--------------------")

# copyArray.remove(12)
# for i in range(len(copyArray)):
#       print(copyArray[i], end=" ")

# print("\n--------------------")
# # reverse the array using with index

# a = copyArray[::-1]
# for i in range(len(a)):
#       print(a[i], end=" ")


# create array using user input

# arr = array('i', [])
# n = int(input("Enter the number: "))

# for i in range(0, n):
#       arr.append(int(input("Enter next input: ")))

# for x in arr:
#       print(x, end=" ")


# Searching the element

a = array('i', [1,2,3,4,5,6])
i = a.index(5)

print("Index is:", i)

from numpy import *

val = array([1,2,3,4], float) 
print(val)


a = zeros(10, int)
print(a)

a = full(10, 5)
print(a) 

# 3D array
three = array([[[1,2], [3,4]], [[5,6], [7,8]]])
print(three)      