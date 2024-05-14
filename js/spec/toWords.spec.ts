/* number to words
    whole numbers

    given       expect
    1           one dollar          ✅
    2           two dollars ✅
    10          ten
    11          eleven
    20          twenty
    22          twenty two
    123         one hundred twenty three

    dollars and cents

    given       expect
    0.01        one cent
    0.02        two cents
    1.02        one dollar and two cents




*/

// q: why aren't these tests runnings? a: because in that refactor rename you did not call it .spec.ts.

describe('numbers to check writing format', () => {
    
    function pluralOf(n,unit) {
        return (n===1?unit:`${unit}s`);
    }

   
    const numberToWords = (n) => {    // n:number not compiling; why?
            const unitPart = (n) => {return `${pluralOf(n,"dollar")}`}
            const numberPart = (n) => {
                switch (n) {
                    case 1: return 'one';
                    case 2: return 'two';
                }
            }
            const whole = numberPart(n) + ' ' + unitPart(n);
            return whole;
            
        }

    it('pluralizes 1 dollar', () => {
        expect(pluralOf(1,"dollar")).toBe("dollar")
    })
  
    it("pluralizes 2 cents", () => {
        expect(pluralOf(2,"cent")).toBe("cents");
    })

    it('spells 1 dollar', () => {
        expect(numberToWords(1)).toBe("one dollar");
    })
    it('spells 2 dollars', () => {
        expect(numberToWords(2)).toBe("two dollars")
    })


    // now exercise number part.. previously did bottom up (detroit school) and last thing tested was /numberToWords/ .. 
    // I see I accidentially did this top down.. london but no mocks ()

})
