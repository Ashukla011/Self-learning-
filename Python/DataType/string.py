"""
1. IN python , string are IMMUTABLE 
    This means once a string is created, its contents connot be changed , any operation that seems to modify a string actully create a new string object in memory
"""
# example
s = "hello"
print(id(s))

# Accessing characters in string"
str = "abcdefghijklmnopqrstuvwxyz"

first_letter = str[0]
print(f"first letter", first_letter)

fruit = 'banana'
animal = 'lion'
fruit_animal = f"{fruit} and {animal}"
print(f"combine both the string: {fruit_animal}")

# add new line charecter \n 
print("\nPython \nc++ \njava")


letter = fruit[1] # print 
# Length 
length = len(fruit)
# last = fruit[length]
print(f"Length of String :", length)

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
# greeting[0] = 'J'
# TypeError: 'str' object des not support item assignment
# which means you can not change an existing string . 

# changin Case in String with Methods , avery method followed by set of parentheses
name = "ada lovelace"
print(f"changing case in a string with methods:", name.title()) # Ada Lovelace , chnage first later in upercase

# checking if string start with a certain substring

substr1 = "avnish, hello hai "
substr2 = "hello, hello hai "

contains_hello1 = substr1.startswith("hello")
contains_hello2 = substr2.startswith("hello")
print(contains_hello1) # false
print(contains_hello2) # True


# Stripping Whitespace : 
# Extra whitespace can be confusing in your programs. To programmers, 
# 'python' and 'python ' look pretty much the same. But to a program, they 
# are two different strings

# Removing leading and trailing whitespace
message = ' hello '
trimmed_messsage = message.strip()

#spliting a string into a list of words
words = "sundar hello"
words_split = words.split(" , ")
print(f"spliting:", words_split) # ['sundar hello']

#joing a list of words into sing string 
joined_words = "_".join(words_split) 
print(f"Joing words:" , joined_words) # sundar hello

# string formatting 
formatted_float = "{:,.2f}".format(3.14159)
print(f"formatted: {formatted_float}")