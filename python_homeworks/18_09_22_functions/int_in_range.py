

def int_in_range(num, range_start, range_end):
    """
    Write a function that would return if given int is within a certain range
    """

    return True if range_start <= num <= range_end else False


number = 6
start = 2
end = 9
print(int_in_range(number, start, end))
