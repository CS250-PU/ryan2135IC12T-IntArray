#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
#include <initializer_list>

class IntArray {
public:
  //TODO#1: Implement and throw exceptions for: 1) a size of 0
  //        and an inability to successfully allocate memory
  //        https://www.cplusplus.com/reference/new/bad_alloc/
  IntArray (size_t size = 10);

  //TODO#2: Implement copy constructor
  IntArray (const IntArray &rcIntArray);

  //TODO#3: Implement destructor
  ~IntArray ();

  //TODO#4: Implement size which returns the total elements in the array
  size_t size () const;

  //TODO#5: Implement and throw exception for inability to
  //        successfully allocate memory
  const IntArray &operator=(const IntArray &rcIntArray);

  //TODO#6: Implement ==
  bool operator==(const IntArray &rcIntArray) const;

  //TODO#7: Implement != using implemented ==
  bool operator!=(const IntArray &rcIntArray) const;

  //TODO#8: Implement subscript operator for non-const IntArrays. Throw
  //        exception for subscript out of range
  int &operator[](size_t subscript);

  //TODO#9: Implement subscript operator for const IntArrays. Throw
  //        exception for subscript out of range
  int operator[](size_t subscript) const;

  //TODO#10:  Implement a constructor that uses an initializer list
  IntArray (std::initializer_list<int>);

  friend std::ostream &operator<< (std::ostream &, const IntArray &);
  friend std::istream &operator>> (std::istream &, IntArray &);

private:
  size_t mLength;
  int *mpInt;
};

#endif