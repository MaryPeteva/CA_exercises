"""
class Request: .ip = str .user = str (could be None) .is_authenticated = bool (never True without .user, and True,
if user can be authenticated (existing on the server users DB))

class Server: .db = Database() *** Think of Database representation, such to allow you easily check for user
existence .ram = int .storage = int .is_on = None *** Should be changeable upon action

method power_on()
    should change the is_on
method power_off()
    should change the is_on
method process_request()
    Try to authenticate user if existing
    return appropriate data and update the Request instance

"""
import csv
import pprint


class Database:
    def __init__(self):
        with open('data_base_txt.csv', "r") as source:
            reader = csv.reader(source)
            self.data_dict = {}
            i_key = 1
            for ip, user in reader:

                self.data_dict[i_key] = i_key
                self.data_dict[i_key]['user'] = user
                self.data_dict[i_key]['ip'] = ip

                i_key += 1


new_d_b = Database()
print(new_d_b.data_dict)

