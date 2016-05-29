import random
import string
import sys

output = ''
while 1:
    letter = string.ascii_letters[(random.randint(0,25))]
    if output == '' and letter == 'h':
        output += letter
    elif output == 'h' and letter == 'e':
        output += letter
    elif output == 'he' and letter == 'l':
        output += letter
        output += letter
    elif output == 'hell' and letter == 'o':
        output += letter + ' '
    elif output == 'hello ' and letter == 'w':
        output += letter
    elif output == 'hello w' and letter == 'o':
        output += letter
    elif output == 'hello wo' and letter == 'r':
        output += letter
    elif output == 'hello wor' and letter == 'l':
        output += letter
    elif output == 'hello worl' and letter == 'd':
        output += letter
    elif output == 'hello world':
        print(output)
        sys.exit()
