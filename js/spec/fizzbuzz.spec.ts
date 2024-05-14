/* 
    fizzbuzz puzzle.

    say the numbers 1 to 100
    unless divisible by 3, say "fizz"
    but divisible by 5, say "buzz"
    if divisible by 3 and 5, say "fizzbuzz"

    for example:
        given       expect
    
        1           1   ✅
        2           2    ✅   
        3           fizz   ✅   
        4           4
        5           buzz     ✅   
        6           fizz
        7           7
        8           8
        9           fizz       ✅   
        15          fizzbuzz      ✅  

    test driven development
        red. write a failing test
        green. get it to pass. hacks OK.
        refactor. clean it up to our definition of done

    definition of done checklist:
        all tests pass?
        reveals intention?
        no duplication?
        fewest elements?


*/


function fizzbuzz(n) {


    const divisibleBy = (m) => n%m === 0

    
    if (divisibleBy(3) && divisibleBy(5)) {
        return "FizzBuzz";
    }
    if (divisibleBy(3)) {
        return "Fizz";
    }

    if (divisibleBy(5)) {
        return "Buzz";
    }
    return n;
}

describe('fizzbuzz', () => {

    it('says 1', () => {
        const result = fizzbuzz(1);
        expect(result).toBe(1);
    })

    it("says 2", () => {
        expect(fizzbuzz(2)).toBe(2);
    })

    it("says Fizz for 3", () => {
        expect(fizzbuzz(3)).toBe("Fizz");
    })

    it("says 4", () => {
        expect(fizzbuzz(4)).toBe(4);
    })

    it("says Buzz for 5", () => {
        expect(fizzbuzz(5)).toBe("Buzz");
    })

    it("says Fizz for 9", () => {
        expect(fizzbuzz(9)).toBe("Fizz");
    })

    it("says FizzBuzz for 15", () => {
        expect(fizzbuzz(15)).toBe("FizzBuzz");
    })

    const scenarios = [
        { n: 1, expected: 1 },
        { n: 2, expected: 2 },
        { n: 3, expected: "Fizz" },
        { n: 4, expected: 4},
        { n: 5, expected: "Buzz"},
        { n: 6, expected: "Fizz"},
        { n: 15, expected: "FizzBuzz"}
      ];

    test.each(scenarios)('fizzbuzz of $n should be $expected',
        ({n, expected}) => {expect(fizzbuzz(n)).toBe(expected) } )

})