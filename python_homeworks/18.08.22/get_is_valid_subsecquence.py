"""
    Given two non-empty arrays of integers, finish the function by adding code that determines if
    the second array is a subsequence of the first one.
    Subsequence is not mandatory adjacent in the array, but following the same order.
    Example:
    array = [5, 1, 22, 25, 6, -1, 8, 10]
    sequence = [1, 6, -1, 10]
    """
# REDONE plus length and index check

base_array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence_array = [5, 1, 22, 25, 6, -1, 8, 10, 15]  # False
# sequence_array = [1, 6, -1, 10]    # True


def get_is_valid_subsequence(array, sequence):
    i = 0
    j = 0
    previous_index = 0
    is_sequence = False
    base_array_len = len(base_array)
    sequence_array_len = len(sequence_array)
    if base_array_len > sequence_array_len:
        for i in range(sequence_array_len):
            for j in range(base_array_len):
                if sequence_array[i] == base_array[j]:
                    if j >= previous_index:
                        is_sequence = True
                        break
                    else:
                        is_sequence = False
                else:
                    is_sequence = False
            if not is_sequence:
                break
            else:
                previous_index = j
    else:
        is_sequence = False

    if is_sequence:
        print("True")
    else:
        print("False")


get_is_valid_subsequence(base_array, sequence_array)
