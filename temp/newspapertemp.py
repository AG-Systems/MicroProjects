
import re
import newspaper
import urllib
from newspaper import Article
import nltk
import time

cnn_paper = newspaper.build('http://cnn.com')
cbs_paper = newspaper.build('http://cbs.com')
while(0<1):
    for article in cnn_paper.articles:
        print(article.url)
    for category in cnn_paper.category_urls():
        print(category)
    time.sleep(60)
    try:
        article = cnn_paper.articles[0]
        print ("First article")
        article.download()
        print ("Article download")
        time.sleep(10)
        article.parse()
        print ("article parsed")
        time.sleep(10)
        article.nlp()
        print ("article nlp")
        time.sleep(10)
        summary = article.summary
        page = urllib.urlopen("http://xauriga.com/tech.html").read()
        text_file = open("tech.html", "w")
        newsummary = ''.join(('<p> ',summary, '</p>'))
        text = re.sub('<p>.*?</p>', newsummary , page)
        print text
        text_file.write(text)
        text_file.close()
        time.sleep(600)
    except:
        continue
    else:
        time.sleep(10)
        article = cbs_paper.articles[0]
        print ("cbs article num 1")
        article.download()
        print ("cbs download ")
        time.sleep(10)
        article.parse()
        print ("Article paresed for cbs")
        time.sleep(10)
        article.nlp()
        print ("Article nlp cbs")
        time.sleep(10)
        summary = article.summary
        page = urllib.urlopen("http://xauriga.com/tech.html").read()
        text_file = open("tech.html", "w")
        newsummary = ''.join(('<p> ',summary, '</p>'))
        text = re.sub('<p>.*?</p>', newsummary , page)
        print text
        text_file.write(text)
        text_file.close()
        time.sleep(600)
