package org.example;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
/*
 * Problem: compute the prime factors of a given number
 * E.g.,
 *  2 -> [ 2 ]              x
 *  3 -> [ 3 ]              x
 *  4 -> [ 2, 2 ]
 *  6 -> [ 2, 3 ]
 *  8 -> [ 2, 2, 2 ]
 * 12 -> [ 2, 2, 3 ]
 */

public class FactorPrimesTest {
    private FactorPrimes f;

    @BeforeEach public void setup() {
        f = new FactorPrimes();
    }

    @Test void two() {
        var expected = new ArrayList<Integer>(List.of(2));
        assertEquals(expected, f.FactorsOf(2));
    }

    @Test void three() {
        var expected = new ArrayList<Integer>(List.of(3));
        assertEquals(expected, f.FactorsOf(3));
    }

    @Test void four() {
        var expected = new ArrayList<Integer>(List.of(2, 2));
        assertEquals(expected, f.FactorsOf(4));
    }

    @Test void eight() {
        var expected = new ArrayList<Integer>(List.of(2, 2, 2));
        assertEquals(expected, f.FactorsOf(8));
    }


    @Test void six() {
        var expected = new ArrayList<Integer>(List.of(2, 3));
        assertEquals(expected, f.FactorsOf(6));
    }

    @Test void nine() {
        var expected = new ArrayList<Integer>(List.of(3, 3));
        assertEquals(expected, f.FactorsOf(9));
    }

    @Test void twelve() {
        var expected = new ArrayList<Integer>(List.of(2,2,3));
        assertEquals(expected, f.FactorsOf(12));
    }

}
