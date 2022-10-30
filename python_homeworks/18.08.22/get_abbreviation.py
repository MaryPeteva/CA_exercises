"""
# :param string:
# :return: abbreviation from the string (first 3 symbols). If string is shorter than 5 chars,
"""
# REDONE

string_input = 'Avada Kedavra'


def get_abbreviation(string):
    abbreviation = ''
    if len(string) > 5:
        abbreviation = string[0:3]
    else:
        abbreviation = string

    return abbreviation


print(get_abbreviation(string_input))
