import time

import praw

r = praw.Reddit('Tts a bot. What else')
r.login()
already_done = []
print ("logging in")

dotanew = [" I'm new ", "i'm new ", "I'm new"]
test = ["testing", "auriga", "meepo"]
showerc = ["repost", "shit repost", "old"]
showereply = """Wow a repost? Come on man.
I'm a bot, but feel free to reply to me if you're having issues or if I get something wrong. If you have any suggestions for extra content to include, [message me](http://www.reddit.com/message/compose/?to=aurigabot). """
gaben = ["gaben"]
badr = ["bad bot", "bad aurigabot", "bad auriga"]
goodr = ["good auriga", "good aurigabot", "good bot"]
replydota = """ Welcome to Dota 2! 

This guide has been inspired by the intolerable-bot. Credits to the creater for inspiration.

*The subreddit has a wiki with a lot of useful information for newer players - from the sidebar: [**New players begin here!**](http://www.reddit.com/r/learndota2/wiki/index)*

What are some basic tips when starting to play?
#### What are some basic tips when starting to play?

&nbsp; | Guides for beginners
-----|------------
[Dota 2: How Not To Suck - A Noob's guide](https://www.youtube.com/watch?v=mbcmMFsmrqY) | A video that gives quick and easy infomation about the game.
[In-game guides for each hero](http://www.dota2.com/workshop/builds/overview) | You can subscribe to guides [in the Steam Workshop](http://steamcommunity.com/app/570/guides) and they will appear in-game with item and skill build recommendations. Reading the top-rated hero guide is often a good idea when playing a hero for the first time.
[Comprehensive Guide to Dota 2](http://steamcommunity.com/sharedfiles/filedetails/?id=123364976) | An absolute guide to Dota 2 with a ton of video content, graphics and information. Might be a little overwhelming to a brand-new player.
[DOTA 2 Easiest Heroes](https://www.youtube.com/watch?v=bManbovLSh0) | Easiest heroes to start playing dota.
[DOTA 2 Heroes Noobs Shouldn't Play ](https://www.youtube.com/watch?v=NNcd662BW9Q) | All of the characters you should avoid when trying to learn to play dota. Even tho meepo is my favorite avoid him for now.

I'm a bot, but feel free to reply to me if you're having issues or if I get something wrong. If you have any suggestions for extra content to include, [message me](http://www.reddit.com/message/compose/?to=aurigabot).

Full credit and inpirations to /u/intolerable. He is a great guy!! """
print("Loaded all of the variables")
while True:
    subreddit = r.get_subreddit('test')
    print("Loaded dota 2 ")
    for submission in subreddit.get_hot(limit=10):
        op_text = submission.selftext.lower()
        has_praw = any(string in op_text for string in dotanew)
        if submission.id not in already_done and has_praw:
            print ("If statement has been true")
            msg = '[PRAW related thread](%s)' % submission.short_link
            r.send_message('aurigabot', 'PRAW Thread', msg)
            already_done.append(submission.id)
            comment.reply(replydota)
            print("Dota 2 noob guide has been replied")
    time.sleep(1800)
    print ("Sleeping")
    subreddit = r.get_subreddit('pcmasterrace')
    for submission in subreddit.get_hot(limit=10):
        op_text = submission.selftext.lower()
        has_praw = any(string in op_text for string in gaben)
        if submission.id not in already_done and has_praw:
            msg = '[PRAW related thread](%s)' % submission.short_link
            r.send_message('aurigabot', 'PRAW Thread', msg)
            already_done.append(submission.id)
            comment.reply("PRAISE LORD GABEN!")
            print ("pcmr reply has been posted")
    time.sleep(1800)
    comment = submission.comments[0]
    subreddit = r.get_subreddit('Showerthoughts')
    for submission in subreddit.get_hot(limit=10):
        op_text = submission.selftext.lower()
        has_praw = any(string in op_text for string in showerc)
        if submission.id not in already_done and has_praw:
            msg = '[PRAW related thread](%s)' % submission.short_link
            r.send_message('aurigabot', 'PRAW Thread', msg)
            already_done.append(submission.id)
            comment.reply(showereply)
            print ("Showerthought reply has been posted")
    time.sleep(1800)
    subreddit = r.get_subreddit('test')
    for submission in subreddit.get_hot(limit=10):
        op_text = submission.selftext.lower()
        has_praw = any(string in op_text for string in test)
        if submission.id not in already_done and has_praw:
            msg = '[PRAW related thread](%s)' % submission.short_link
            r.send_message('aurigabot', 'PRAW Thread', msg)
            already_done.append(submission.id)
            comment.reply("Testing for my people")
            print ("Robot test has been posted")
        print ("New robot test has been posted")
    
