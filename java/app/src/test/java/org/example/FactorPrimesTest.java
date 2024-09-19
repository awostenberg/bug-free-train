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
 *  5 -> [ 5 ]
 *  6 -> [ 2, 3 ]
 *  8 -> [ 2, 2, 2 ]
 * 12 -> [ 2, 2, 3 ]
 * 13 -> [ 13 ]
 * 15 -> [ 3, 5 ]
 */

public class FactorPrimesTest {
    private FactorPrimes f;

    @BeforeEach public void setup() {
        f = new FactorPrimes();
    }

    @Test void t002() {
        var expected = new ArrayList<Integer>(List.of(2));
        assertEquals(expected, f.FactorsOf(2));
    }

    @Test void t003() {
        var expected = new ArrayList<Integer>(List.of(3));
        assertEquals(expected, f.FactorsOf(3));
    }

    @Test void t004() {
        var expected = new ArrayList<Integer>(List.of(2, 2));
        assertEquals(expected, f.FactorsOf(4));
    }

    @Test void t005() {
        var expected = new ArrayList<Integer>(List.of(5));
        assertEquals(expected, f.FactorsOf(5));
    }

    @Test void t008() {
        var expected = new ArrayList<Integer>(List.of(2, 2, 2));
        assertEquals(expected, f.FactorsOf(8));
    }

    @Test void t006() {
        var expected = new ArrayList<Integer>(List.of(2, 3));
        assertEquals(expected, f.FactorsOf(6));
    }

    @Test void t009() {
        var expected = new ArrayList<Integer>(List.of(3, 3));
        assertEquals(expected, f.FactorsOf(9));
    }

    @Test void t012() {
        var expected = new ArrayList<Integer>(List.of(2,2,3));
        assertEquals(expected, f.FactorsOf(12));
    }

    @Test void t013() {
        var expected = new ArrayList<Integer>(List.of(13));
        assertEquals(expected, f.FactorsOf(13));
    }

    @Test void t015() {
        var expected = new ArrayList<Integer>(List.of(3,5));
        assertEquals(expected, f.FactorsOf(15));
    }

    @Test void t025() {
        var expected = new ArrayList<Integer>(List.of(5,5));
        assertEquals(expected, f.FactorsOf(25));
    }
}
