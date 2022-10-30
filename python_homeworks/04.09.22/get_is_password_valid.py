import re


def get_is_password_valid():
    # Ask for user's password.
    # Check user's password against the following conditions:
    # At least 6 symbols, and maximum of 32 symbols.
    # At least 1 upper case letter.
    # At least 1 symbol.
    # hint: use the re library.
    regX = "^(?=.*?[A-Z])(?=.*?[*\W]).{6,32}$" # good solution with regex, I want to see on excercises.
    input_pass = input('Enter password: ')

    if re.fullmatch(regX, input_pass):
        return 'Strong password'
    else:
        return 'Password does not match requirements'


print(get_is_password_valid())
