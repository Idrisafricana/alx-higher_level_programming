#!/usr/bin/python3

def safe_print_division(a, b):
    """Returns the division of a by b."""
    try:
        div = a / b
    except (TypeError, ZeroDivisionError) as e:
        div = None
    finally:
        print(f"Inside result: {div}")
    return div
