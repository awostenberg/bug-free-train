
#include "CuTest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* 
    count in roman numbers

    initial test list
        1       -> I                ✅
        2       -> II               ✅
        3       -> III              ✅
        4       -> IV
        5       -> V               ✅
        6       -> VI              ✅
        9       -> IX
        10      -> X
        
        m bar M̅  1 million 1000*1000 ✅

    red. green. refactor.
    dod. All Tests Pass? Reveals intent? no duplication? fewest elements? 

diary.
    1st pomodoro        failure! a minute to spare. 10 seconds to pass. Refactor?



*/

/* Part II: other way around roman to arabic 
        I       1
        II      2

        (see above)
*/



char* sticks(int n) {
    char* working = (char*)malloc(n+1); // would not even get us to a few billion..
                                 // appreciating how inefficient the generate sticks and replace is..

                                 // run length encoding (rle) to get a billion sticks? 🤔
    working[0] = '\0';
    for (int i=0; i<n; i++) {
        working[i] = 'I';
        working[i+1] = '\0';
    }

    return working;                 //leaks memory

}

int romanToArabic(const char* roman) {
    return 1;

}

void TestArabic1_I(CuTest* tc) {
    int result = romanToArabic("I");
    CuAssertIntEquals(tc, 1, result);   
}

char* replace_n_of_this_with_that(char* input, int howMany, char toReplace, char replaceWith) {
    char* output = malloc(strlen(input))+1;     //leaks but does not mutate input; tradeoffs
    int out=0;
    int consecutiveSticks = 0;
    for (int in=0; input[in]; in++) {
        // accumulate provisionally
        output[out++] = input[in];
        output[out] = '\0';
        
        // if /howMany/ consecutive accumulated, replace with /replaceWith/
        if (input[in] == toReplace) {
            consecutiveSticks++; 
        }
        bool isRollupTime = consecutiveSticks==howMany;
        if (isRollupTime) {
            out -= howMany;
            output[out++] = replaceWith;
            output[out] = '\0';
            consecutiveSticks = 0;
        }
 
        
    }
   
    return output;
}

char* replace_5_sticks_with_v(char* input) {
    return(replace_n_of_this_with_that(input, 5, 'I', 'V'));
}

char* replace_2_vs_with_x(char* input) {
    return (replace_n_of_this_with_that(input, 2, 'V', 'X'));
}

char* roman(int n) {
    
    char* resultI = sticks(n);
    char* resultV = replace_5_sticks_with_v(resultI); //leaks memory
    char* resultX = replace_2_vs_with_x(resultV);   //leaks

    // optimizations - notation for a million

    // small wrench: unicode takes more than one byte/character.
    const int million = 1000*1000;   //   in c++ 1'000'000; 
    if (n == million) { //todo build on do not ignore all of above
        strcpy(resultX,"M̅");  
    }

    return resultX;

}

void TestRomanI(CuTest* tc) {

    CuAssertStrEquals(tc, "I", roman(1));     // note: the above include of <stdio.h> needed for NULL here
}

void TestRoman2_II(CuTest* tc) {
    const char* result = roman(2);
    CuAssertStrEquals(tc, "II", result);   
}
void TestRoman3_III(CuTest* tc) {
    const char* result = roman(3);
    CuAssertStrEquals(tc, "III", result);   
}
void TestRoman5_V(CuTest* tc) {
    const char* result = roman(5);
    CuAssertStrEquals(tc, "V", result);
}
void TestRoman6_VI(CuTest* tc) {
    const char* result = roman(6);
    CuAssertStrEquals(tc, "VI", result);
}
void TestRoman10_X(CuTest* tc) {
    const char* result = roman(10);
    CuAssertStrEquals(tc, "X", result);
}
void TestRoman11_XI(CuTest* tc) {
    const char* result = roman(11);
    CuAssertStrEquals(tc, "XI", result);
}
void TestRoman15_XV(CuTest* tc) {
    const char* result = roman(15);
    CuAssertStrEquals(tc, "XV", result);
}


void TestRomanMillion_mbar(CuTest* tc) {
    const char* result = roman(1000*1000);
    CuAssertStrEquals(tc, "M̅", result);  
}

CuSuite* RomanNumbersGetSuite() {
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, TestRomanI);
    SUITE_ADD_TEST(suite, TestRoman2_II);
    SUITE_ADD_TEST(suite, TestRoman3_III);
    SUITE_ADD_TEST(suite, TestRoman5_V);
    SUITE_ADD_TEST(suite, TestRoman10_X);

    SUITE_ADD_TEST(suite, TestArabic1_I);
    SUITE_ADD_TEST(suite, TestRomanMillion_mbar);

    return suite;
}