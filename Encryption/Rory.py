from tkinter import *
root = Tk()
root.fileName = filedialog.askopenfilename( filetypes = ( ("Normal files", "*.png*"),("All files", "*.*")))
# THis opens up the dialog.
