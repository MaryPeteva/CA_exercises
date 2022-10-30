house = {
    'address': 'ulica...',
    'owner': 'bai_Gosho',
    'near_by': {'mall', 'beach', 'sport_hall', 'building_apartment'},
    'utilities': {'electric', 'water'},
    'population': {'dog', 'cat', 'parrot', 'hedgehog', 'two_humans', 'fishes'},
    'floor': {'first_floor', 'second_floor'},
    'yard': {'pool', 'garage', 'tennis_cort', 'helicopter_land', 'gym'}
}

indent_out = 0


def pretty_print_dict(dictionary, indent):
    """
    :param dictionary:
    :return: NOne
    If we have the following dictionary
    {
        level1: {
            attr1: value,
            attr2: value,
            level2: {
                attr1: value,
                attr2: value,
                level3: {
                    attr1: value,
                }
            }
        }
    }
    The desired output is the dictionary data printed in a pretty manner - tabulated (4 tabs) per
    level
    """

    for key, value in dictionary.items():
        indent += 1
        print('\t' * indent + str(key))
        if isinstance(value, dict):
            pretty_print_dict(value, indent + 3)
        else:
            print('\t' * (indent + 3) + str(value))


print(pretty_print_dict(house, indent_out))
