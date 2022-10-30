import random


def get_products():
    """ Should fill and return the products list """
    products = []

    for number in range(1, random.randint(100, 1000)):
        # add (number ** 2 - 1) to products if number > 5 and is odd
        if number > 5 and number % 2 != 0:
            products.append(number ** 2 - 1)

    return products


print(get_products())
