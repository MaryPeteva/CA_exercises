/* Write a macro that makes a string identifier*/
#define STR_VALUE(arg)      #arg
#define FUNCTION_NAME(name) STR_VALUE(name)

#define TEST_FUNC      bla_bla_bla
#define TEST_FUNC_NAME FUNCTION_NAME(TEST_FUNC)

#include <stdio.h>

static void TEST_FUNC(void)
{
    printf("In function %s\n", TEST_FUNC_NAME);
}

int main(void)
{
    puts(TEST_FUNC_NAME);
    TEST_FUNC();
    return(0);
}