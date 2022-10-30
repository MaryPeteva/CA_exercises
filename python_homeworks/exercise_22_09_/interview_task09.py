"""
9. Write a Python function that takes a list of words and return the longest word and the length of the longest one.
Input: ["Python", "Exercises", "Great"]
Output:
Longest word:  Exercises
Length of the longest word:  9
"""


def longest_word(words_list):
    max_len = 0
    max_word = ''
    for i in range(len(words_list)):
        if len(words_list[i]) > max_len:
            max_len = len(words_list[i])
            max_word = words_list[i]
    print(f'Longest word: {max_word}\nLength of the longest word: {max_len}')


words = ["Python", "Exercises", "Great"]
longest_word(words)
