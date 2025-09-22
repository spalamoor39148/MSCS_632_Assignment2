# python_syntax_error.py
# Intentional error: using 'o' instead of 0 or initializing variable

def calculate_sum(arr) :
    total = o   # <-- 'o' is not defined; will raise NameError at runtime
    for num in arr:
        total += num
    return total

if __name__ == "__main__":
    numbers = [1, 2, 3, 4, 5]
    result = calculate_sum(numbers)
    print("Sum in Python :", result)
