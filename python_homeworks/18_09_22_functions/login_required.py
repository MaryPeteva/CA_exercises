
from functools import wraps
import random


def login():
    """
    2. Write decorator login_required that would be used to check if a user is logged, and if not,
    it should print out "Login required", and if user is logged, the decorated function should print
    "Welcome"
    For user you can use {'name': 'User name', 'logged': True / False}
    """
    user_name = 'Garga_Roshawa'
    log_status = bool(random.getrandbits(1))
    print('login status', log_status)  # just a check
    log_in_greet(log_status, user_name)


@wraps(login)
def log_in_greet(log_stat, user):

    print(f'Welcome, {user}') if log_stat else print('Login required!')

# FIX
login()
