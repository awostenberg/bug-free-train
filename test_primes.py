
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

def prime_factors_of(n):
    match n:        # match requires python 3.11
        case 2: return [2]
        case 3: return [3]
        case 4: return [2,2]  #todo refactor rm duplication; use recursion. ..

def test_2_y_2():
    assert prime_factors_of(2) == [2]

def test_3_y_2():
    assert prime_factors_of(3) == [3]
    
def test_4_y_2_2():
    assert prime_factors_of(4) == [2,2]
    
