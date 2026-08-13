# set data type

'''
A 'set' is built-in data type in python that represent an unordered group of distinct items. when you need to 
keep a collection of element without care to order and guarantee that each component only show once, sets come 
in very handy . curly braces "{}" are used to surround 
sets.

'''
# example 

fruits = {"apple", "banana","orang","banana"}
vegetables = {"carrot","Spanish","broccoli"}

print(f"fruits:", fruits) # {'orange', 'apple','banana'}
print(f"vegetable", vegetables) # {'carrot', 'Spanish', 'broccoli'}

# adding elements to the set
fruits.add("pear")
print(f"adding new element:", fruits)

# Removing elements to the set

fruits.remove("apple")
print(f"removing item:", fruits)

# basic set Operations
# 1. union of sets
food = fruits.union(vegetables)
print(f"union of set:", food)

# 2. intersection of sets
common_item = fruits.intersection(vegetables)
print(f"intersection of item:", common_item)

# 3. defference of sets 
unique_fruits = fruits.difference(vegetables)
print(f"unique fruits:", unique_fruits)
