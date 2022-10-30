import re


def text_match_second(txt, new_txt=''):
    """
        Write a Python program to concatenate the consecutive numbers in a given string.
        Example:
        Input : "Enter at 1 20 Kearny Street. The security desk can direct you to floor 1 6. Please have your
        identification ready."
        Output: "Enter at 120 Kearny Street. The security desk can direct you to floor 16. Please have your
        identification ready."
        param: txt, new_txt
        return: new_txt
    """
    new_txt = re.sub(r"(?<=\d)\s(?=\d)", '', txt)
    return new_txt


txt_out = "Enter at 1 20 Kearny Street. The security desk can direct you to floor 1 6. " \
          "Please have your identification ready."

print(text_match_second(txt_out))
