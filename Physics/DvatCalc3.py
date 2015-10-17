from tkinter import *
import math



def calc():
    distanceX=float(distance.get())
    initialvX=float(initialv.get())
    velocityX=float(initialv.get())
    accelX=float(initialv.get())
    timeeX=float(initialv.get())
    
    velocityF= initialvX + (accelX * timeeX)
    distanceF= (initialvX * timeeX) + (2 * accelX * distanceX)
    accelF = (velocityX-initialvX) % (timeeX)
    initialvF = velocityF - (accelX * timeeX)
    timeeF = ( distanceF - (2 * accelX * distanceX) )% initialvX

    labelresult=Label(myGUI,text=velocityF).grid(row=7,column=2)
    labelresult=Label(myGUI,text=distanceF).grid(row=8,column=2)
    labelresult=Label(myGUI,text=accelF).grid(row=9,column=2)
    labelresult=Label(myGUI,text=initialvF).grid(row=10,column=2)
    labelresult=Label(myGUI,text=timeeF).grid(row=11,column=2)

    print( "Your velocity is:" )
    print (velocityF)
    print( "Your distance is: ")
    print (distanceF)
    print("Your acceleration is: ")
    print (accelF)
    print("Your initial velocity: ")
    print (initialvF)
    print ("Your time is: " )
    print (timeeF)
    
    return
    
    


myGUI=Tk()
myGUI.geometry('400x200+100+200')
myGUI.title('Physics')

distance=StringVar()
initialv=StringVar()
velocity=StringVar()
accel=StringVar()
timee=StringVar()

label1=Label(myGUI,text='Welcome to the physics calculator',fg='red').grid(row=0,column=2)
label2=Label(myGUI,text='Enter your distance').grid(row=1,column=0)
label3=Label(myGUI,text='Intial velocity').grid(row=2,column=0)
label4=Label(myGUI,text='What is your regular velocity?').grid(row=3,column=0)
label5=Label(myGUI,text='What is your acceleration?').grid(row=4,column=0)
label6=Label(myGUI,text='What is your time?').grid(row=5,column=0)

mydistance=Entry(myGUI,textvariable=distance).grid(row=1,column=2)
myintialv=Entry(myGUI,textvariable=initialv).grid(row=2,column=2)
myvelo=Entry(myGUI,textvariable=velocity).grid(row=3,column=2)
myaccel=Entry(myGUI,textvariable=accel).grid(row=4,column=2)
mytimee=Entry(myGUI,textvariable=timee).grid(row=5,column=2)

button1=Button(myGUI,text='Calculate!',command=calc).grid(row=6,column=0)

# v = v0 + A*T
# x = x0 + v0*t + 1/2*a*t*t
# v*v = v0 * vo + 2*a(x-x0)
