#include "CuTest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* Part II: other way around roman to arabic
        I       1       
        II      2
        // III
        // IIII

        V       5
        VI      6
        // VII
        // VIII
        // VIIII
        X       10
        XI
        // XII
        // XIII
        // XIIII
        XV

*/

int romanToArabic(const char* roman) {
    int n = 0;
    int rest = 0;
    switch (roman[0]) {
        case '\0': 
            n = 0; 
            return 0;
        case 'I':
            n = 1;
            break;
        case 'V':
            n = 5;
            break;
        case 'X':
            n = 10;
            break;
    }

    rest = romanToArabic(++roman);
    return n + rest;
}


// Tests
void TestArabic1_I(CuTest* tc) {
    int result = romanToArabic("I");
    CuAssertIntEquals(tc, 1, result);
}

void TestArabic2_II(CuTest* tc) {
    int result = romanToArabic("II");
    CuAssertIntEquals(tc, 2, result);
}

void TestArabic5_V(CuTest* tc) {
    int result = romanToArabic("V");
    CuAssertIntEquals(tc, 5, result);
}

void TestArabic6_VI(CuTest* tc) {
    int result = romanToArabic("VI");
    CuAssertIntEquals(tc, 6, result);
}


void TestArabic10_X(CuTest* tc) {
    int result = romanToArabic("X");
    CuAssertIntEquals(tc, 10, result);
}

void TestArabic26_XXVI(CuTest* tc) {
    int result = romanToArabic("XXVI");
    CuAssertIntEquals(tc, 26, result);
}

CuSuite* ArabicNumbersGetSuite() {
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, TestArabic1_I);
    SUITE_ADD_TEST(suite, TestArabic2_II);

    SUITE_ADD_TEST(suite, TestArabic5_V);
    SUITE_ADD_TEST(suite, TestArabic6_VI);
    SUITE_ADD_TEST(suite, TestArabic10_X);

    SUITE_ADD_TEST(suite, TestArabic26_XXVI);

    return suite;
}
