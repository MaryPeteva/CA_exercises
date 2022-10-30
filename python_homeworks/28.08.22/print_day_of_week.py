from datetime import date


def print_day_of_week():
    """ Use if elif else construction to print the verbose version of weekday. """
    today = date.today()
    weekday = today.weekday()  # Values from 0 - 6
    if weekday == 0:
        return 'Monday'
    elif weekday == 1:
        return 'Tuesday'
    elif weekday == 2:
        return 'Wednesday'
    elif weekday == 3:
        return 'Tuesday'
    elif weekday == 4:
        return 'Friday'
    elif weekday == 5:
        return 'Saturday'
    else:
        return 'Sunday'


print(print_day_of_week())
