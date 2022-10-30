from exersise_30_09.time_class import Time
# Missing docstring, setters, getters


class Competitor:
    @staticmethod
    def check_input_time(time_l: []):
        if 0 < int(time_l[0]) > 23:
            raise Exception('Wrong hour input')
        elif 0 < int(time_l[1]) > 59:
            raise Exception('Wrong minutes input')
        elif 0 < int(time_l[2]) > 59:
            raise Exception('Wrong minutes input')

    def __init__(self, reg_num: int, first_name: str, last_name: str, starting_time: str):
        # Starting time is for type class Time, missing finish time
        self.registration_number = reg_num
        self.first_name = first_name
        self.last_name = last_name
        time_list = starting_time.split(':')
        self.check_input_time(time_list)
        self.times = Time()
        self.times.set_hour(self.times, time_list[0])
        self.times.set_minute(self.times, time_list[1])
        self.times.set_seconds(self.times, time_list[2])

    def __str__(self):
        print(f'| {self.first_name} {self.last_name} | №{self.registration_number} | {self.times.__str__()} | '
              f'{self.times.__str__()} |') # Very good format
