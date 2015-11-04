from itertools import cycle
import re
import random
#inputX = raw_input(" Please start typing: ")
inputX = "Hello my name is"
mylist = inputX.split(" ")

for s in mylist:
    print s
    chain = random.choice(mylist)
    if s == chain:
    	s += 1
    	print s
