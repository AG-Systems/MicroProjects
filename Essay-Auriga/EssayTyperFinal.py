from itertools import cycle
import time
import wikipedia
import re
import random

testVar = raw_input("Please input the topic you want the computer write for you: ")
print wikipedia.summary(testVar, sentences=2)
str = wikipedia.summary(testVar, sentences=2)
print(" \n ")
text_file = open("EssayTyper.txt", "w")

words = str.split() 
#final = str.split(".")
zz = []

chain = random.choice(words)
print chain
#print " "
text_file.write(chain)
text_file.write(" ")
for x in range(len(words)):
    for s in range(len(words)):
        if words[s] == chain:
            auriga = words[s+1]
            zz.append(auriga)
            chain = random.choice(zz)
    print chain
    #print " "
    text_file.write(chain)
    text_file.write(" ")
    del zz[:]
text_file.close()


# Python 2.7
# Must use pip install wikipedia






