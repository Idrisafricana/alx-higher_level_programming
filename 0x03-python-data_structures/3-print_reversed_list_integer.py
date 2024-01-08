#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    if not my_list:
        return
    
    reversed_list = reversed(my_list)
    for element in reversed_list:
        print("{:d}".format(element))

# Example usage:
# my_list = [1, 2, 3, 4]
# print_reversed_list_integer(my_list)
