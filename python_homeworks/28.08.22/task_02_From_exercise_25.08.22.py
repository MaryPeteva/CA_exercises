# 7. Write a python function which  Reverse word in string.
#     Extra task: find count of words in string.
string_to_reverse = 'Today is our Python exercises with group one from strypes-03 course.'


def reverse_words_from_string(string):
    """
       Given a string , reverse words.
       Example:
       Input : Today is our Python exercises with group one from strypes-03 course.
       Output: course. strypes-03 from one group with exercises Python our is Today
       :param string:
       :return: reversed string
    """
    string_list = string.split(' ')
    string_list.reverse()
    string = ' '.join(map(str, string_list))
    print(f'Number of words in the string is: {len(string_list)}')
    return string


# string_to_reverse = reverse_words_from_string(string_to_reverse) # It's not OK string_otu =, maybe difficult variable
print(reverse_words_from_string(string_to_reverse))
