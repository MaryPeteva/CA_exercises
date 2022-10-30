x = 'awesome'

def super_outer():
    x = 'super'
    def outer():
        x = 'outer'
        def myfunc():
            global x
            x = 'fantastic'
            print('In func: Python is:', x)
        myfunc()
        print('in func2:', x)
    outer()
    print('python', x)

super_outer()
print('python', x)
