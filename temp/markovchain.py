from itertools import cycle
import time
import wikipedia
import re
import random

testVar = raw_input("Please input the topic you want the computer write for you: ")
print wikipedia.summary(testVar, sentences=2)
str = wikipedia.summary(testVar, sentences=2)
mylist = str.split(" ")
print(" \n ")

text_file = open("EssayTyper.txt", "w")

print("Markov chain started")
il = mylist.__iter__()
it=iter(mylist)
for x in range(0, 100):
    for s in il:
        print s
        chain = random.choice(mylist)
        if s == chain:
            nextt = it.next()
            text_file.write(chain)
            text_file.write(" ")
            text_file.write(nextt)
print("Finished")
text_file.close()


# Python 2.7
# Must use pip install wikipedia






