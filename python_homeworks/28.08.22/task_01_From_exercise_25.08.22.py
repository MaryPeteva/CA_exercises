# 6. Write a python function which find all prime divisors of a number and return list from them.
num = 60
prime_list_out = []
# it gives different answer at 4 digit num only


def is_prime(n):
    if n == 1:
        return False

    count = 0
    i = 1
    while i <= n:
        if n % i == 0:
            count += 1
        i += 1

    if count > 2:
        return False
    return True


def find_prime_divisors(number, prime_list):
    """
    Given one integer , find all prime divisors of a number.
    Definition: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
    Example:
    Input : 60
    Output: [2, 3, 5]
    :param number:
    :param prime_list:
    :return: prime_list
    """
    i = 2
    while number != 1 and number > i:
        if is_prime(i):
            prime_list.append(i)
            number //= i
        i += 1
    return prime_list


prime_list_out = find_prime_divisors(num, prime_list_out)
print(prime_list_out)
