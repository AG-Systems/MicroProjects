import random

#str = raw_input("Please input a sentence: ")
str = "hello my hello ah hello aa hello fff"
words = str.split() 
final = str.split(".")
zz = []

#chain = random.choice(words)
chain = "hello"
print chain
for s in range(len(words)):
    if words[s] == chain:
        auriga = words[s+1]
        print auriga
        zz.append(auriga)
        chain = random.choice(zz)
print chain
