def reversed_integer(number):
    """
           Given an integer, return the integer with reversed digits.
           Note: The integer could be either positive or negative.
           Example:
           Input : -258
           Output: -852
           :param number:
           :return: reversed number
       """
    revs_number = 0
    tmp_num = abs(number)
    while tmp_num > 0:
        remainder = tmp_num % 10
        revs_number = (revs_number * 10) + remainder
        tmp_num = tmp_num // 10

    if number < 0:
        return revs_number * -1
    else:
        return revs_number


num = int(input())
print(reversed_integer(num))
