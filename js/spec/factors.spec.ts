/* 
    prime factors of a number, for example
        given       then
        2           2   ✅
        3           3   ✅
        4           2;2 ✅
        5           5
        6           2;3 ✅
        8           2;2;2  ✅
        9           3;3;3 ✅
*/

describe('prime factors', () => {
    const findFirstFactor = (n) => {
        // if ((n>2) && (n%2===0))
        //     return 2
        // else
        //     return false

        for (let i=2; i<=n/2; i++) {
            if ((n>2) && ( n%i===0)) 
                return i
        }
        return false
    }

    const factors = (n) => {


        // find the first factor
        // if none this is prime and return the number directly
        // otherwise do what's in the default branch below
        //      rest = recurse on n/first-factor
        //      return result = cons first-factor rest

        const ff = findFirstFactor(n)
        if (!ff)
            return [n]
        else {
                const firstFactor = ff
                const rest = factors(n/ff)
                const result = [firstFactor].concat(rest)
                return result
        }
      
    }
    it('finds 2 has no first factor', () => {
        expect(findFirstFactor(2)).toBe(false)
    })
    it('find 4 has first factor of 2',() => {
        expect(findFirstFactor(4)).toBe(2)
    })

    it('factors 2 -> 2',() => {
        expect(factors(2)).toEqual([2])
    })
    it('factors 3 -> 3', () => {
        expect(factors(3)).toEqual([3])
    })

    it('factors 4 -> 2;2', () => {
        expect(factors(4)).toEqual([2,2])
    })

    it('factors 6 -> 2;3', () => {
        expect(factors(6)).toEqual([2,3])
    })
    
    it('factors 8 -> 2;2;2', () => {
        expect(factors(8)).toEqual([2,2,2])
    })

    it('factors 9 -> 3;3', () => {
        expect(factors(9)).toEqual([3,3])
    })
    
});

