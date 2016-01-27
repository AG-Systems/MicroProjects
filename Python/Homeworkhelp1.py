colleges = [
    "UC Berkeley",
    "USC",
    "Santa Clara University",
    "Notre Dame de Namur",
    "Georgetown"
]
major = [
        "Computer science",
        "Agricultural studies",
        "Religious studies",
        "Political science",
        "African studies",
        "Music theory"    
]
size_school = [
        "Small school",
        "Small class size",
        "Experienced faculty",
        "Awesome parties",
        "Good food"
]
color = [
        "Blue and gold",
        "Cardinal and gold",
        "Red and white",
        "Blue, white, and gold",
        "Blue and gray",
]
video = [
        "Beyoncé",
        "The Rolling Stones",
        "twenty øne piløts",
        "Britney Spears",
        "Weird Al Yankovich",
]

votes = [0, 0, 0, 0, 0]

question = ""
answers = ["","","","",""]
def ask_questions(question, answers):
    print(question)
    for x in answers:
        print (x)
    number = int(input("What is your answer?"))
    if question == "Which major most interests you?":
        votes[0] = number
    if question == "Which of the following is most important to you?":
        votes[1] = number
    if question == "What are your favorite colors?":
        votes[2] = number
    if question == "Who had one of the best videos of ALL TIME?":
        votes[3] = number
ask_questions("Which major most interests you?",major)
print ("\n")
ask_questions("Which of the following is most important to you?",size_school)
print ("\n")
ask_questions("What are your favorite colors?",color)
print ("\n")
ask_questions("Who had one of the best videos of ALL TIME?",video)
print ("\n")

for (z,x) in zip(colleges,votes):
    print (z,":",x)
    
