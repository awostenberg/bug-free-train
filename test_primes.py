
'''
Write a function to return the prime factors of a number.

e.g. 2 -> 2
    3 -> 3
    4 -> 2, 2
    8 => 2, 2, 2
    10 -> 2, 5
    100 -> 2, 2, 5, 5
    quintillion -> eighteen 2s, eighteen 5s

test driven development
    red. write a failng test
    green. get it to pass, quickly (hacks ok)
    refactor. clean up to definition of done

    Definition of Done checklist:
        all tests pass? reveals inention? no duplication? fewest elements?
'''

def try_find_first_factor(n):
    import math
    sqrt = math.sqrt(n)
    stop = int(sqrt)+1
    for candidate in range(2,stop):
        if n % candidate == 0:
            return True, candidate
    return False, n

def prime_factors_of(n):
    match try_find_first_factor(n):
        case True,first_factor:
            # not prime - has a factor
            rest = prime_factors_of(n // first_factor)
            return [first_factor] + rest
        case False,_:
            # is prime no factors
            return [n]

def old_prime_factors_of(n):
    found, first_factor = try_find_first_factor(n)
    if found:
        # not prime
        rest = prime_factors_of(n // first_factor)
        return [first_factor] + rest
    # is prime
    return [n]

def test_2_y_2():
    assert prime_factors_of(2) == [2]

def test_3_y_2():
    assert prime_factors_of(3) == [3]
    
def test_4_y_2_2():
    assert prime_factors_of(4) == [2,2]
    
def test_8_y_2_2_2():
    assert prime_factors_of(8) == [2,2,2]
    
def test_5_y_5():
    assert prime_factors_of(5) == [5]

def test_6_y_2_3():
    assert prime_factors_of(6) == [2,3]

def test_15_y_3_5():
    assert prime_factors_of(15) == [3,5]
    
def test_100_y_2_2_5_5():
    assert prime_factors_of(100) == [2,2,5,5]

def repeat(n, times):
    result = []
    for i in range(0, times):
        result.append(n)
    return result

def test_1000_y_2x3_5x3():
    assert prime_factors_of(1000) == repeat(2,3) + repeat(5,3)

def test_quintillion_y_2x18_5x18():
    assert prime_factors_of(10**18) == repeat(2,18) + repeat(5,18)

# todo mob timer default to 10?
# todo float saw a float in there... I thought

# limits
def test_bigger_than_60_bits_thousand_quintillion():
    assert prime_factors_of(10**21) == repeat(2,21) + repeat(5,21)
def test_googol():
    assert prime_factors_of(10**100) == repeat(2,100) + repeat(5,100)

