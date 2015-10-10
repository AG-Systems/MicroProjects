import tweepy
from keys import keys

print ("imported libs")

CONSUMER_KEY = keys['consumer_key']
CONSUMER_SECRET = keys['consumer_secret']
ACCESS_TOKEN = keys['access_token']
ACCESS_TOKEN_SECRET = keys['access_token_secret']

print ("Keys are loaded")

auth = tweepy.OAuthHandler(CONSUMER_KEY, CONSUMER_SECRET)
auth.set_access_token(ACCESS_TOKEN, ACCESS_TOKEN_SECRET)
api = tweepy.API(auth)

print ("Auth and api is loaded in")

twt = api.search(q="retweet to win!")
t = ['retweet to win!',
     'retweet to win!!',
     'Retweet to win!',
     'Retweet to Win!',
     'retweet to Win!',
     'Retweet to Win',
     'retweet to Win',
     'Retweet to win',
     'retweet to win']
print ("The search query has loaded")

for s in twt:
    for i in t:
        if i == s.text:
            sn = s.user.screen_name
            print (sn)
            m = "@%s Retweet" % (sn)
            print (m)
            s = api.update_status(m, s.id)
            print (s)
            print("End of the loop. Will re-roll soon")
            
     
