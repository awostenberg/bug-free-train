'''
Play Fizzbuzz
if divisible by 3 say fizz
if divisible by 5 say buzz
if visible by 3 and 5 say fizzbuzz
else say number

Example:
    2 > 2
    3 > fizz
    4 > 4
    5 > buzz
    15 > fizzbuzz
'''


def getFizzBuzz(n):
    def is_divisible_by(m):
        return n % m == 0
    
    if is_divisible_by(3) and is_divisible_by(5):
        return "fizzbuzz"
    
    if is_divisible_by(3):
        return "fizz"
    
    if is_divisible_by(5):
        return "buzz"
    
    return n


def test_15_should_fizzbuzz():
    assert (getFizzBuzz(15) == "fizzbuzz")


def test_3_should_fizz():
    assert (getFizzBuzz(3) == "fizz")


def test_2_should_2():
    assert (getFizzBuzz(2) == 2)


def test_4_should_4():
    assert (getFizzBuzz(4) == 4)


def test_5_should_buzz():
    assert (getFizzBuzz(5) == "buzz")
