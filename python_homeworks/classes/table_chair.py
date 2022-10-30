"""
class Table .material = str .places = int ._seats = {} (1: Chair(is_free: Bool, person=Person())) ...

method place_person():
Take a place on the table if possible

method free_place():
Mark a place as free

"""
import random


class Person:
    def __init__(self, name_in, nums):
        self.name = name_in
        self.wanted_chair = random.randint(1, nums)
        self.is_seated = False

    @staticmethod
    def choose_different_seat(nums):
        return random.randint(1, nums)

    def person_is_seated(self):
        self.is_seated = True

    def seated(self):
        return self.is_seated


class Chair:
    def __init__(self, chair_id):
        self.chair_id = chair_id
        self.is_taken = False

    def seat_taken(self):
        if not self.is_taken:
            self.is_taken = True
            return False
        else:
            return True

    def set_free(self):
        self.is_taken = False


class Table:
    def __init__(self, material, av_seats):
        self.material = material
        self.available_seats = []
        for chair in range(1, av_seats+1):
            self.available_seats.append(Chair(chair))

    def place_person(self, pers):
        if not self.available_seats[pers.wanted_chair - 1].seat_taken():
            pers.person_is_seated()
            print(f'Patreon {pers.name} seated on {pers.wanted_chair}!')
        else:
            print('Seat already taken!\nChoose different seat!')
            while not pers.seated():
                pers.wanted_chair = pers.choose_different_seat(av_seats_out)
                self.place_person(pers)

    def free_place(self, id_free):
        if self.available_seats[id_free].seat_taken():
            self.available_seats[id_free].set_free()
            print('Chair freed')


def make_ppl_queue(ppl_list, num_seat):
    new_dict = {}
    for ppl_name in range(len(ppl_list)):
        new_dict[ppl_name] = (Person(ppl_list[ppl_name], num_seat))
    return new_dict


material_out = 'wood'
av_seats_out = 4
new_table = Table(material_out, av_seats_out)
print('Table Created')
print(new_table.material, new_table.available_seats)
print('available seats')
for i in range(av_seats_out):
    print(new_table.available_seats[i].chair_id, new_table.available_seats[i].is_taken)
names_input = ['Gosho', 'Pesho', 'Sasho', 'Masho']
patrons_queue = make_ppl_queue(names_input, av_seats_out)
print('Patrons created')
for i in range(len(names_input)):
    print('Patreon', patrons_queue[i].name, 'wanted seat', patrons_queue[i].wanted_chair)

print('start placing')

for j in patrons_queue:
    new_table.place_person(patrons_queue[j])

print('table after taking seats')
for i in range(av_seats_out):
    print(new_table.available_seats[i].chair_id, new_table.available_seats[i].is_taken)

print('after set_free')

for k in range(av_seats_out):
    new_table.available_seats[k].set_free()

for i in range(av_seats_out):
    print(new_table.available_seats[i].chair_id, new_table.available_seats[i].is_taken)

"""
works!but it's ugly af!
"""
