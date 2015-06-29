import praw
import time
import backend
import badb
import goodb
import human
from praw.helpers import comment_stream

r = praw.Reddit("An highly advance bot.")
r.login()

target_text = "aurigabot"
response_text = """
\t Did someone summon me?!!
\t 
\t Do you want to message my creater? [Click right here!](http://reddit.com/u/smarttechadvice)
"""

processed = []
while True:
    for c in comment_stream(r, 'all'):
        if target_text in c.body and c.id not in processed:
            c.reply(response_text)
            processed.append(c.id)


