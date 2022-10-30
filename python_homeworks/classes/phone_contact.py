"""
class MobilePhone: .brand = str .year = int .material = str .contacts = {Contacts() based contacts} ...

method call_number(contact)
call number if contact exists

method add_contact(number, name, ..anything_else)
add contact to .contacts

class Contact: .number .name ... ._times_dialed

method update_times_dialed()

"""


class Contact:
    def __init__(self, number, name):
        self.number = number
        self.name = name
        self.times_dialed = 0

    def update_times_dialed(self):
        self.times_dialed += 1


class MobilePhone:
    def __init__(self, brand, year, material):
        self.brand = brand
        self.year = year
        self.material = material
        self.contacts = {}

    def add_contact(self, number, name):
        if name in self.contacts:
            print('Contact already exist!')
        else:
            self.contacts[name] = Contact(number, name)

    def call_number(self, name):
        if name in self.contacts:
            print(f'Calling {name} with number {self.contacts[name].number} ....')
            self.contacts[name].update_times_dialed()
        else:
            print(f'In your contacts there is no user with that name({name})')


phone = MobilePhone('Nokia', 1999, 'Brick')
phone.add_contact('0892321312', 'Gosho')
phone.add_contact('0892321312', 'Shasho')
phone.call_number('Gosho')
print(phone.contacts['Gosho'].times_dialed)
phone.call_number('Shasho')
print(phone.contacts['Shasho'].times_dialed)
phone.call_number('Vasko')
