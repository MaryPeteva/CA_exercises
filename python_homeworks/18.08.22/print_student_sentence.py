name_input = 'Gosho'
age_input = 20
date = '18.08.22'


def print_student_sentence(name, age, today):
    """
    :param name:
    :param age:
    :param today:
    :return: None
    """
    # Write code that prints out a sentence like
    # <name> is aged <age>. He is a passionate learner, and he started a JD program just <today>
    print(f"{name} is aged {age}. He is a passionate learner, and he started a JD program just {today}")


print_student_sentence(name_input, age_input, date)
