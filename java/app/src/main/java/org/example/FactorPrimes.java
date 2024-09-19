package org.example;


import java.util.ArrayList;
import java.util.List;


public class FactorPrimes {
    private int smallestDivisor(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return i;
        }

        return n;  // is prime
    }

    public ArrayList<Integer> FactorsOf(int n) {
        var s = smallestDivisor(n);
        if (s == n)   // is prime
            return new ArrayList<Integer>(List.of(n));

        var remaining_factors = FactorsOf(n / s);
        remaining_factors.add(0,s);    //prepend

        return remaining_factors;
    }
}
