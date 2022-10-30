def is_perfect_number(num):
# missed docstring
    sum_div = 0
    for i in range(1, num):
        if num % i == 0:
            sum_div += i
    if sum_div == num:
        return True
    else:
        return False 


n = 6
print(is_perfect_number(n))
