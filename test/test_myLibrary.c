#include "../vendor/ceedling/vendor/unity/src/unity.h" // The testing framework

#include "../include/myLibrary.h" // The header for the code we are testing
//#include "mock_rectangle.h"             // A mock header

void setUp(void) {}

void tearDown(void) {}

void test_sum() {
  int a = 10,
    b = 20,
    expected = a + b;

  TEST_ASSERT_EQUAL(expected, sum(a, b));
}