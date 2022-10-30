

def square_nums():
    """
    4. Write a Python function to create and print a list where the values are square of numbers
    between 1 and 30 (both included)
    """
    nums = []
    for num in range(1, 30):
        nums.append(num**2)
    return nums


print('All numbers **2 ', square_nums())
