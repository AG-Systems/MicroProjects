import os
import time
import win32com.client
os.system('"C:\Program Files\Adobe After Effects CS6\Support Files"')
time.sleep(9)
shell = win32com.client.Dispatch("WScript.Shell")
shell.SendKeys("{CONTROL}")
shell.SendKeys("N")
shell.SendKeys("RETURN")


