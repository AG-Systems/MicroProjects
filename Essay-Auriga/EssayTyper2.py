import wikipedia
import re
import random

testVar = raw_input("Please input the topic you want the computer write for you: ")
print("If you want to best results, please choose the number 2 down below. ")
LengthX = raw_input("Please input the length of your essay. Pick 1-10: ")
print wikipedia.summary(testVar, sentences=LengthX)
str = wikipedia.summary(testVar, sentences=LengthX)
strf = str.split(" ")
print(" \n ")

text_file = open("EssayTyper.txt", "w")

for x in range(0, len(str)):
    chain = random.choice(strf)
    print(random.choice(strf))
    text_file.write(chain)
    text_file.write(" ")
text_file.close()








