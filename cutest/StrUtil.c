#include "CuTest.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* StrToUpper(char* str) {
    for (int i=0;i<strlen(str);i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

void TestStrToUpper(CuTest *tc) {
    char* input = strdup("hello world");
    char* actual = StrToUpper(input);
    const char* expected = "HELLO WORLD";
    CuAssertStrEquals(tc, expected, actual);
}
void TestStrToUpper_one(CuTest * tc) {
    char* input_and_output = strdup("h"); // must strdup this because it updates in place

    CuAssertStrEquals(tc,"H",StrToUpper(input_and_output));
}

CuSuite* StrUtilGetSuite() {   
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, TestStrToUpper);
    SUITE_ADD_TEST(suite, TestStrToUpper_one);


    return suite;
}

