"""
    Write a function to find all prime numbers from 2 to limit with Sieve of Eratosthones algorithm.
    Extra: create a function with generators
    Input: 100
    Output: [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    """


def sieve_of_eratosthenes(num):

    prime = [True for i in range(num + 1)]
    x = 2
    while x * x <= num:
        if prime[x]:
            for i in range(x * x, num + 1, x):
                prime[i] = False
        x += 1

    nums = [x for x in range(2, num + 1) if prime[x]]

    return nums


num_out = 100
print(sieve_of_eratosthenes(num_out))
