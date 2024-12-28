# Iterator Invalidation Bug in C++
This repository demonstrates a common bug in C++ related to iterator invalidation when using `std::vector::erase()`.  The bug arises from modifying a vector while iterating through it using an index-based loop.  Removing an element shifts subsequent elements, invalidating iterators.

## Bug Description
The `bug.cpp` file contains C++ code that attempts to remove a specific element (value 5) from a vector. The loop iterates over the vector using indices.  When an element is erased, the vector is modified which invalidates subsequent iterators resulting in undefined behavior (potential crashes, incorrect results etc.).

## Solution
The `bugSolution.cpp` file provides a corrected version.  This solution uses iterators safely. Removing an element using the iterator returned by `erase()` automatically updates the iterator for the next iteration, ensuring correct behavior.  Alternative solutions can involve iterating backwards or using a separate vector to hold elements to remove for deletion after the iteration completes.