# 4. Write a function. For a given sentence, return the average word length.
# Note: Remember to remove punctuation first.

# sentence1 = "Hi all, my name is Tom...I am originally from Australia."
# sentence2 = "I need to work very hard to learn more about algorithms in Python!"

# Output:
# 4.2
# 4.08

def avrg_len(sentence):

    disallowed_chars = '.,!'
    for i in disallowed_chars:
        sentence = sentence.replace(i, '')
    print(sentence)
    sen2 = sentence.split()
    avr_len = 0.0
    for sent in sen2:
        avr_len += len(sent)

    av = avr_len / float(len(sen2))
    return round(av, 2)


sentence1 = "Hi all, my name is Tom...I am originally from Australia."
sentence2 = "I need to work very hard to learn more about algorithms in Python!"
print(avrg_len(sentence1))
print(avrg_len(sentence2))
