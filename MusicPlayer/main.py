from pygame import mixer
from Tkinter import *
import os
from tkFileDialog import *

root = Tk()
root.wm_title("Choose a .mp3 song")

w = Label(root, text="Please choose a .pages file to convert.") 
fileName = askopenfilename(parent=root)

w.pack()
root.mainloop()
    
mixer.init()
mixer.music.load(fileName)
mixer.music.play()

