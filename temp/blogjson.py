import json
import newspaper
from newspaper import Article
import nltk
import time

n = 0

cnn_paper = newspaper.build('http://cnn.com/')
for article in cnn_paper.articles:
    print(article.url)
for category in cnn_paper.category_urls():
    print(category)
try:
    article = cnn_paper.articles[n]
    article.download()
    time.sleep(10)
    article.parse()
    time.sleep(10)
    article.nlp()
    time.sleep(10)
    summary = article.summary
except:
    pass
with open('blogs.json', 'r+') as f:
    data = json.load(f)
    data['header'] = article.title # <--- add `id` value.
    f.seek(0)        # <--- should reset file position to the beginning.
    json.dump(data, f, indent=4)



#           "header": "Welcome",
#           "author": "Jon",
#           "team"  : "Webmaster",
#            "date"  : ["2015", "12", "12"],
#            "paragraphs" : [
#                "Template"
#            ],
#            "images": []
