

from datetime import date
from functools import wraps


def today():
    """
    1. Write a decorator that would be used on a function that return a number. If today is wednesday,
    friday, or sunday, the function should return the number decreased by 1.5.
    """
    day_today = date.weekday(date.today())
    decrease_num_of_day(day_today)


@wraps(today)
def decrease_num_of_day(today_r):
    if today_r == 2 or 4 or 5:
        print(float(today_r) - 1.5)


today()
