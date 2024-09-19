''' Problem: Roman numbers:
    write a function that given a number returns (a string)
    which is the Roman numeral equivalent.
    For example:
    1    2    3   4   5   6   7   8    9   10   11  15
    i   ii  iii  iv   v  vi   vii viii ix   x   xi  xv
    
    tdd reminder:
        red: write a failing test,
        green: make it pass (quickly; hacks okay)
        refactor: clean up to definition of "done"

        DoD checklist:
            1. all tests pass
            2. reveals intention
            3. no duplication
            4. fewest elements '''

def replace_5sticks_with_v(s):
    return s.replace("i" * 5, "v")

def replace_2vs_with_x(s):
    return s.replace("v" * 2, "x")

def replace_4i_with_iv(s):
    return s.replace("iiii", "iv")

def replace_viv_with_ix(s):
    return s.replace("viv","ix")


def roman(n):
    final = "i" * n # sticks
    final = replace_5sticks_with_v(final)
    final = replace_2vs_with_x(final)
    final = replace_4i_with_iv(final)
    final = replace_viv_with_ix(final)

    return final

def test_1_should_i():
    assert(roman(1) == "i")

def test_2_should_ii():
    assert(roman(2) == "ii")

def test_5_should_v():
    assert(roman(5) == "v")

def test_6_should_vi():
    assert(roman(6) == "vi")

def test_10_should_x():
    assert(roman(10) == "x")

def test_4_should_iv():
    assert(roman(4) == "iv")

def test_9_should_ix():
    assert(roman(9) == "ix")

def test_11_should_xi():
    assert(roman(11) == "xi")

def test_14_should_xiv():
    assert(roman(14) == "xiv")

def test_15_should_xv():
    assert(roman(15) == "xv")

def test_19_should_xix():
    assert(roman(19) == "xix")

def test_30_should_xxx():
    assert(roman(30) == "xxx")

def test_50_should_l():
    assert(roman(50) == "l")

