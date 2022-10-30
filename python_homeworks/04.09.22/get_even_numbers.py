def get_even_numbers(array):
    # Finish the function by adding code that would print out only the even numbers.
    for num in range(1, len(array)):
        if num % 2 == 0:
            print(num)


num_arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
get_even_numbers(num_arr)
