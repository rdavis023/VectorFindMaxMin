#include "FindMaxMin.h"


vector<int> findMaxMin(vector<int>& myList) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function finds the maximum and minimum       |
  //   |   values in a given list of integers.               |
  //   | - It uses a single loop to go through the list.     |
  //   |                                                     |
  //   | Return type: vector<int>                            |
  //   | - Returns a vector containing maximum and minimum.  |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'maximum' and 'minimum' keep track of the         |
  //   |   highest and lowest values found.                  |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
   if (myList.empty()) {
        return {}; // Return an empty vector if the input list is empty
    }

    int maximum = std::numeric_limits<int>::min(); // Initialize to smallest possible integer
    int minimum = std::numeric_limits<int>::max(); // Initialize to largest possible integer

    for (int num : myList) {
        if (num > maximum) {
            maximum = num; // Update maximum if the current number is greater
        }
        if (num < minimum) {
            minimum = num; // Update minimum if the current number is smaller
        }
    }

    return {maximum, minimum}; // Return a vector with maximum and minimum
}