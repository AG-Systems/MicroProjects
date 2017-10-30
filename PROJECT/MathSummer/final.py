from Tkinter import *
import tkFileDialog as filedialog
import os
import subprocess

root = Tk()
root.fileName = filedialog.askopenfilename( filetypes = ( ("Normal files", "*.txt*"),("All files", "*.*")))



print (root.fileName)

total_sum = 0
counter = 0
with open(root.fileName, "rb") as imageFile:
    searchfile = imageFile
    for line in searchfile:
        if "line length =" in line:
            print line
            num = float(line[line.index("=")+2:-1])
            print("Number obtained:" + str(num))
            total_sum += num
            print("Sum so far: " + str(total_sum))
        counter += 1
    searchfile.close()
print("\n")
print("TOTAL SUMMED B: " + str(total_sum))
print("How many lines in ur file: " + str(counter))
