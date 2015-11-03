
import re
import random
inputX = raw_input(" Please start typing: ")
str = inputX
strf = str.split(" ")
print(" \n ")

text_file = open("MachineLearningInfo.txt", "w")

for x in range(0, len(str)):
    chain = random.choice(strf)
    print("Random word is: ")
    print(chain)
    if chain in strf:
        nextf = strf[x + 1]
    print("The next word after chain is" )
    print(nextf)
    text_file.write(" ")
text_file.close()

#pythong 2.7






