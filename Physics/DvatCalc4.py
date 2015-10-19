from tkinter import *
import math
import json
import urllib.request
import requests



def calc(): 
    r = requests.post("http://physicshelp.me/motion/onedimension")
    print (r.status_code)
    print (r.headers)
    print (r.content)
    return
    
    


myGUI=Tk()
myGUI.geometry('280x200+100+200')
myGUI.title('Physics')

distance=StringVar()
initialv=StringVar()
velocity=StringVar()
accel=StringVar()
timee=StringVar()

label1=Label(myGUI,text='Welcome to the physics calculator',fg='red').grid(row=0,column=2)
label2=Label(myGUI,text='Distance:').grid(row=1,column=0)
label3=Label(myGUI,text='Intial velocity: ').grid(row=2,column=0)
label4=Label(myGUI,text='Velocity: ').grid(row=3,column=0)
label5=Label(myGUI,text='Acceleration: ').grid(row=4,column=0)
label6=Label(myGUI,text='Time: ').grid(row=5,column=0)

mydistance=Entry(myGUI,textvariable=distance).grid(row=1,column=2)
myintialv=Entry(myGUI,textvariable=initialv).grid(row=2,column=2)
myvelo=Entry(myGUI,textvariable=velocity).grid(row=3,column=2)
myaccel=Entry(myGUI,textvariable=accel).grid(row=4,column=2)
mytimee=Entry(myGUI,textvariable=timee).grid(row=5,column=2)

button1=Button(myGUI,text='Calculate!',command=calc).grid(row=6,column=0)

# v = v0 + A*T
# x = x0 + v0*t + 1/2*a*t*t
# v*v = v0 * vo + 2*a(x-x0)






#      r = urllib.request.urlopen('http://physicshelp.me/motion/onedimension')
    # print(r.read())
