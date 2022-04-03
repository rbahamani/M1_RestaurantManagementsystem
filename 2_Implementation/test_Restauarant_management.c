#include "unity.h"

extern void test_Restauarant_management();

void setup(void)
{
}

void teardown(void)
{
}

int main(void)
{
    UnityBegin(NULL);

    Run_Test(test_Restauarant_management);

    return (Unityend());
}