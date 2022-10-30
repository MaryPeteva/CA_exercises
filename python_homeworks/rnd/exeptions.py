def divide_with_exeption(number, divisor):
    try:
        print("{}/{}={}".format(number, divisor, number/divisor*1.0))
    except ZeroDivisionError:
        print("You can't divide by zero")


def divide_with_if(number, divisor):
    if divisor == 0:
        print("You can't divide by zero")
    else:
        print("{}/{}={}".format(number, divisor, number / divisor * 1.0))

        
divide_with_exeption(10, 5)
divide_with_if(10, 5)
divide_with_if(10, 0)
divide_with_exeption(10, 0)
