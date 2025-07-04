
fruit = 'banana'
letter = fruit[1] # print b

# Length 
length = len(fruit)
# last = fruit[length]
print(length)

# string Slice indexing start ffrom 1 
s = 'Monty Python'
sliceone = s[0:5] # 
slicetwo = s[6:12] #
slicethree = fruit[:3]
slicefour = fruit[3:]
print(slicefour)
print(slicethree)
print(sliceone)# Monty
print(slicetwo) # Python

# t strings are immutable
greeting = 'Hello world'
greeting[0] = 'J'
# TypeError: 'str' object des not support item assignment
# which means you can not change an existing string . 
