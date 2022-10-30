import re
def text_match(text):
    """
        Write a Python program that matches a string that has an 'a' followed by anything,
        ending in 'b'
        Example:
        Input : "aabbbbd"
        Output: Not matched!
        param: text
        return: Not matched or matched
    """
    if re.match(r'[A a]$', text[0]) and re.match(r'[B b]$', text[-1]):
        return 'Matched'
    else:
        return 'Not matched!'


# str_out = 'afgghjgfb'
# str_out = 'AsdfgB'
# str_out = 'asfdB'
# str_out = 'Asdfb'
# str_out = 'ssdfdfb'
print(text_match(str_out))

