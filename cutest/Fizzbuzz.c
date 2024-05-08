#include "CuTest.h"

#include <stdio.h>
#include <stdlib.h>

char* fizzbuzz(int n) {

    int by3 = n%3==0;
    int by5 = n%5==0;

    int by3by5 = by3<<1 | by5;

    switch (by3by5) {
        case 0b10: return "fizz";
        case 0b01: return "buzz";
        case 0b11: return "fizzbuzz";
        case 0b00: {
                char* result = malloc(42);   // leaks
                sprintf(result,"%d",n);
                return result;
        }


    }
    return "";      //can't happen -- pattern match is exhaustive but compiler can't tell

}


void TestFizzbuzz1(CuTest* tc) {
    CuAssertStrEquals(tc,"1",fizzbuzz(1));
}

void TestFizzbuzz3(CuTest* tc) {
    CuAssertStrEquals(tc,"fizz",fizzbuzz(3));
}

void TestFizzbuzz5(CuTest* tc) {
    CuAssertStrEquals(tc,"buzz",fizzbuzz(5));
}

void TestFizzbuzz15(CuTest* tc) {
    CuAssertStrEquals(tc,"fizzbuzz",fizzbuzz(15));
}

CuSuite* FizzbuzzGetSuite() {
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, TestFizzbuzz1);
    SUITE_ADD_TEST(suite, TestFizzbuzz3);
    SUITE_ADD_TEST(suite, TestFizzbuzz5);
    SUITE_ADD_TEST(suite, TestFizzbuzz15);


    return suite;
}
