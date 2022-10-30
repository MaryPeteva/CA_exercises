id_input = 0
transaction_input = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
transaction_out = []


def store_transactions(transaction_id, transactions):
    """
    :param transaction_id:
    :param transactions:
    :return: transactions
    """
    # Write code that stores the transaction_id if it is an even number
    # The function should return the transactions
    if transaction_id % 2 == 0:
        transactions.append(transaction_id)

    return transactions


arr_len = len(transaction_input)
for identifier in range(arr_len):
    store_transactions(transaction_input[identifier], transaction_out)

print(transaction_out)
