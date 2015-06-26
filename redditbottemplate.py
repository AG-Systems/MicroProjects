import praw
import time

r = praw.Reddit(user.agent = "Bot called aurigabot. Does not do much honesty")
r.login()

words_to_match = ['hack', 'cracking', 'programming', 'social engineering', 'aurigax']
cache = []

def run_bot():
    subreddit = r.get_subreddit("test")
    comments = subreddit.get_comments(limit=25)
    for comment in comments:
        comment_text = comment.body.lower()
        isMatch = any(string in comment_text for string in words_to_match)
        if comment.id not in cache and isMatch:
            comment.reply('Did somebody summon me? I like hacking and I am a bot ')
            cache.append(comment.id)
while True:
    run_bot()
    time.sleep(10)
