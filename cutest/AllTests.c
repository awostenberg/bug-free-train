#include "CuTest.h"
#include <stdio.h>

CuSuite* StrUtilGetSuite();
CuSuite* FizzbuzzGetSuite();
CuSuite* RomanNumbersGetSuite();

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();
    
    CuSuiteAddSuite(suite, StrUtilGetSuite());
  
    CuSuiteAddSuite(suite, FizzbuzzGetSuite());

    CuSuiteAddSuite(suite, RomanNumbersGetSuite());

  
    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);

}

int main(void) {
    RunAllTests();
}

/* 
    g++ -Icutest-1.5/ AllTests.c cutest-1.5/CuTest.c StrUtil.c Fizzbuzz.c RomanNumbers.c
    gcc  -Icutest-1.5/ AllTests.c cutest-1.5/CuTest.c StrUtil.c Fizzbuzz.c RomanNumbers.c

    ./a.out         # run tests
*/