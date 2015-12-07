import facehack
fh = facehack.FaceHack()
fh.login("hackr@example.com","supersecret")
print "Current status:",fh.status()
fh.status("Hakkin Facebook")
print "You have %d friends"%len(fh.friends)
