#!/usr/bin/python3

def no_c(my_string):
    # Initialize an empty string to store the result
    result = ""
    
    # Iterate through each character in the input string
    for char in my_string:
        # Check if the character is not 'c' or 'C', and append it to the result string
        if char.lower() not in ['c', 'C']:
            result += char
    
    # Return the modified string
    return result

# Example usage:
# input_string = "Hello World! This is a Test."
# result_string = no_c(input_string)
# print(result_string)

