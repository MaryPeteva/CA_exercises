import random
import string


def get_random_string():
    string_els = []
    count = 0
    # Using while loop, fill the string_els with 100 random
    # selected letters from the english alphabet
    # Return the string_els as string.
    while count < 100:
        string_els.append(random.choice(string.ascii_letters))
        count += 1
    return ''.join(string_els)


rnd_str = get_random_string()
print(rnd_str)
