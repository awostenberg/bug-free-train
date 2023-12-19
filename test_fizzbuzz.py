# hello please check in your name here...



# plan to solve the fizzbuzz kata

# given a number, 
#   say it, or if divisible by 3, say "fizz", 
#   or if divisible by 5, say "buzz", 
#   unless divisible by 3 and 5, say "fizzbuzz"

# initial test list

# up to 15 counting numbers
# 1 -> 1
# 3 -> fizz
# 5 -> buzz
# 7 -> 
# 15 -> fizzbuzz

def fizzbuzz_decision(n):
    if n%3==0:
        if n%5==0:
            return "fizzbuzz"
        else:
            return "fizz"
    if n%5==0:
        return "buzz"
    return str(n)

def test_1_should_1():
    assert fizzbuzz_decision(1) == "1"

def test_3_should_fizz():
    assert fizzbuzz_decision(3) == "fizz"

def test_5_should_buzz():
    assert fizzbuzz_decision(5) == "buzz"


def test_15_should_fizzbuzz():
    assert fizzbuzz_decision(15) == "fizzbuzz"

def test_7_should_buzz():
    assert fizzbuzz_decision(7) == "7"

# top of hour break;  resume quarter past?

#question talking about social media...
# passion before socmed? 
# W:
#    tools for the job fisherman
#       psalmweaver
#       pro-bono coding dojo "come, let us reason together"
#    family is the monastery of the new dark ages; digital tools?
#       subsidiarity, privacy, we use text... no privacy... WhatsApp better, signal, simplex
#       gk Chesterton distributionism familiy "software garden"
#    digital gold
#
# M: I find a lot of things that interest me, and was wondering
# if I could make progess on them with help... e.g.
#   http://www.paulgraham.com/bel.html
#   language implementation SISC 
