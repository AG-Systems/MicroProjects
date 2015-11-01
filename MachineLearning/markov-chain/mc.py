
import re
import random
inputX = raw_input(" Please start typing: ")
str = inputX
strf = str.split(" ")
print(" \n ")

text_file = open("MachineLearningInfo.txt", "w")

for x in range(0, len(str)):
    chain = random.choice(strf)
    print(random.choice(strf))
    text_file.write(chain)
    text_file.write(" ")
text_file.close()

#pythong 2.7






