package org.example;


import java.util.ArrayList;
import java.util.List;

public class FactorPrimes {
    private int smallestDivisor(int n) {

        if (n%2 == 0)
            return 2;
        if (n%3 == 0)
            return 3;
        return 42;
    }

    private boolean isPrime(int n) {return n<4;}
    public ArrayList<Integer> FactorsOf(int n) {
        // if prime just return the list with that one number
        // if not prime find the smallest number S that divides into n,
        //      and ... divide by S & call self recursively on reminder & append /that/ list to S
        if (isPrime(n))
            return new ArrayList<Integer>(List.of(n));

        var s = smallestDivisor(n);
        var rest = FactorsOf(n / s);
        // append rest to s
        // or prepend s to rest
        rest.add(0,s);    //prepend

        return rest;

    }
}
