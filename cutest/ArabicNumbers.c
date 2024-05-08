#include "CuTest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* Part II: other way around roman to arabic
        I       1
        II      2

        (see above)
*/

int romanToArabic(const char* roman) {
    return 1;

}

void TestArabic1_I(CuTest* tc) {
    int result = romanToArabic("I");
    CuAssertIntEquals(tc, 1, result);
}

CuSuite* ArabicNumbersGetSuite() {
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, TestArabic1_I);

    return suite;
}
