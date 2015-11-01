import wikipedia
import re
import random

testVar = raw_input("Please input the topic you want the computer write for you: ")
print wikipedia.summary(testVar, sentences=2)
str = wikipedia.summary(testVar, sentences=2)
strf = str.split(" ")
print(" \n ")

text_file = open("EssayTyper.txt", "w")

for x in range(0, len(str)):
    chain = random.choice(strf)
    print(random.choice(strf))
    text_file.write(chain)
    text_file.write(" ")
text_file.close()


# Python 2.7
# Must use pip install wikipedia







