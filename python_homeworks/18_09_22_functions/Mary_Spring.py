"""
Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
"""


def dec_func(func):
    def wrapper():
        print('Mary Spring')
    return wrapper


@dec_func
def m_func():
    pass


m_func()
# ummm okay, still don't make sense
