from tkinter import *
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


    
    print(hashlib.md5(str.encode('utf-8')).hexdigest())
    
    
















comment2 = """
f = open("imgData.txt","a") #opens file with name of "imgData.txt"
f.write(str)
f.close()
print(hashlib.md5(str.encode('ansii')).hexdigest())
"""

comment1 = """ fh = open("imageToSave.png", "wb")
fh.write(str.decode('base64'))
fh.close()
"""


    #print (str)
   # fh = open(root.fileName, "wt")
  #  print (str)
  #  fh.write(str.decode('base64'))
   # print (str)
  #  fh.close()
    
    
  #  base64.b64encode(b'your name')
  #  base64.b64encode('your name'.encode('ascii'))

    #print(hashlib.md5(str.encode('utf-8')).hexdigest())
    
    #if you print this string out you will get a huge mess


