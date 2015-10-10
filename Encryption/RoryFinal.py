import os
import base64
import hashlib
import subprocess
root = Tk()
root.fileName = filedialog.askopenfilename( filetypes = ( ("Normal files", "*.jpeg*"),("All files", "*.*")))



print (root.fileName)

# os.startfile(root.fileName)

with open(root.fileName, "rb") as imageFile:
    str = base64.b64encode(imageFile.read())
    print (type(str).__name__)
    str.decode("utf-8")
    hashing = str.decode("utf-8")
    print(hashlib.md5(hashing.encode('utf-8')).hexdigest())
    HashImage = hashlib.md5(hashing.encode('utf-8')).hexdigest()
    f = open("imgDataHash.txt","a") #opens file with name of "imgData.txt"
    f.write(HashImage)
    f.close()
    

#line comments:
# 1-4 All of the modules. Typical stuff
# 5-6 Makes a window then opens a file dialouge
# 10 Just displays the name of the file and the directory.
# 14 - 23 Opens the file, then converts it into bytes and places it into a string. 
# Prints out the type then decodes it into standard text. Prints out the hash number from the hashlib
# Opens a text file then appeands and writes the hash value. 
# This program is not ment to be taken too seriously as there is WAYYYYYYYY better alternatives.  I am very proud of what I came up with
# Works best with .jpeg for now.
# Finished: Oct 10, 2015, 1 am.
# Auther: AG-Systems
