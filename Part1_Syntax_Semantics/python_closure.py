# python_closure.py
def make_multiplier(factor):
    def multiply(x):
        return x * factor   # captured variable 'factor' forms a closure
    return multiply

if __name__ == "__main__":
    double = make_multiplier(2)
    print("double(10) =>", double(10))  # expected output: 20

    triple = make_multiplier(3)
    print("triple(7) =>", triple(7))    # expected output: 21
