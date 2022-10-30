def set_entry_checker():
    # Ask for user's data: First name, age and VIP status.
    # If user's age is under 18, do not allow user to proceed
    # If user's age is between 18 - 25, allow them to stay up to 11pm
    # If group 18_25 has more than 10 users, do not allow user to enter.
    # If user is aged over 25, welcome them without any additional conditions.
    # As an output printout the users count from each group, and also print the VIPs
    # Example input: (Georgi 28, VIP) OR (Alex 25)

    group_over_25_list = []
    group_18_25_list = []
    while True:  # ask fot statement,monday! (input = input()) != 'END'

        input_list = input("Enter First name, age and VIP status or enter 'END': ")
        if input_list == "END":
            break

        input_list = input_list.split()
        if int(input_list[1]) > 25:
            group_over_25_list.append(input_list)
        elif 18 <= int(input_list[1]) <= 25:
            if len(group_18_25_list) >= 10:
                print('Room is full you can''t enter!')
                continue
            else:
                group_18_25_list.append(input_list)
        elif int(input_list[1]) < 18:  # not sure if it needs to be elif, but better safe than sorry
            print('You can''t enter, must be over 18 years of age!')
            continue

    print(f'Group 18-25 years has: {len(group_18_25_list)} users in it, allowed to stay up to 11pm')
    print_groups(group_18_25_list)
    print(f'Group over 25 years has: {len(group_over_25_list)} users')
    print_groups(group_over_25_list)


def print_groups(group):

    for user in group:
        if len(user) > 2:
            print(f'{user[0]} {user[1]}, {user[2]}')
        else:
            print(' '.join(user))


set_entry_checker()
