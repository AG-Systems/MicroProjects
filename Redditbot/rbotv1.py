import praw
import time
from praw.helpers import comment_stream

r = praw.Reddit("Just a regular bot.")
r.login()

target_text = "aurigabot"
response_text = "Auriga is here!! Do you want to message my creater? [Click right here!](http://reddit.com/u/smarttechadvice)"

processed = []
while True:
    for c in comment_stream(r, 'pcmasterrace'):
        if target_text in c.body and c.id not in processed:
            c.reply(response_text)
            processed.append(c.id)
