from tkinter import *
import os
import base64
import hashlib
root = Tk()
root.fileName = filedialog.askopenfilename( filetypes = ( ("Normal files", "*.jpeg*"),("All files", "*.*")))



print (root.fileName)

# os.startfile(root.fileName)

with open(root.fileName, "rb") as imageFile:
    str = base64.b64encode(imageFile.read())
    #print (str)
    #if you print this string out you will get a huge mess

#print(hashlib.md5(str.encode('utf-8')).hexdigest())


comment1 = """ fh = open("imageToSave.png", "wb")
fh.write(str.decode('base64'))
fh.close()
"""
