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
    
