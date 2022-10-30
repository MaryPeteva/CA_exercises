"""
class Pen: .brand = str .capacity = int (symbols) .color = str ...

method write(str):
produce output if str is within remaining capacity

class Person: ... .pens = [...Pen()]

method take_pen():
take pen from .pens collection
method write_something():
use a Pen to write something

"""
from termcolor import colored


class Pen:

    def __int__(self, brand: str, capacity: int, color: str):
        self.brand = brand
        self.capacity = capacity
        self.color = color
        return self

    def write(self, some_txt):
        len_txt = len(some_txt.replace(' ', ''))
        if len_txt <= self.capacity:
            print(colored(some_txt, self.color))
            self.capacity -= len_txt
            print('Ink left', self.capacity)
        else:
            add_to_cap = some_txt.count(' ')
            self.capacity += add_to_cap
            print(colored(some_txt[:self.capacity], self.color))
            print('Not enough ink!')
            self.capacity = 0


class Person:
    def __init__(self, input_name: str):
        self.name = input_name
        self.pens = []

    def create_pens(self, pens_input: []):
        for pen_in in range(len(pens_input)):
            brand = pens_input[pen_in][0]
            capacity = pens_input[pen_in][1]
            color = pens_input[pen_in][2]
            self.pens.append(Pen().__int__(brand, capacity, color))

    def take_pen(self, pen_id: int, some_txt):
        if pen_id <= len(self.pens):
            current_pen = self.pens[pen_id]
            pens.pop(pen_id)
            print('\nPens after taking one out')
            for pen in range(len(pens)):
                print(pens[pen])
            current_pen.write(some_txt)
            self.return_pen(current_pen)

    @staticmethod
    def return_pen(pen_to_ret):
        pens.append([pen_to_ret.brand, pen_to_ret.capacity, pen_to_ret.color])
        print('\nPens after returning the pen')
        for pen_ret in range(len(pens)):
            print(pens[pen_ret])


new_person = Person('Gosho')
pens = [['BIC', 10, 'blue'], ['Faber-Castell', 10, 'red'], ['Pelikan', 10, 'green'], ['Pininfarina', 10, 'magenta'],
        ['BIC', 10, 'grey'], ['Faber-Castell', 10, 'yellow'], ['Pelikan', 10, 'cyan'], ['Pininfarina', 10, 'white']]
new_person.create_pens(pens)
print(new_person.name, 'has:')
for pen in range(len(new_person.pens)):
    print(colored(f'{new_person.pens[pen].brand}, {new_person.pens[pen].capacity}, {new_person.pens[pen].color}',
                  new_person.pens[pen].color))
# for pen in range(len(new_person.pens)):
#     new_person.take_pen(pen, 'we write')
new_person.take_pen(1, 'something')



