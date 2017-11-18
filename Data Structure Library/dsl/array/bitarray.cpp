//
//  bitarray.cpp
//  Data Structure Library
//
//  Created by Kent Kober on 11/17/17.
//  Copyright © 2017 Kent Kober. All rights reserved.
//

#include "bitarray.h"

namespace dsl {
  
  BitArray::BitArray(unsigned int size) {
    
    if (size == 0) { size = 1; }
    
    wordSize = sizeof(int) * __CHAR_BIT__;
    
    int arraySize = size/wordSize;
    if (size % wordSize != 0) { arraySize++; }
    
    arr = new int[arraySize];
  }
  
  BitArray::~BitArray() {
    delete [] arr;
  }
  
  bool BitArray::get(unsigned int index) {
    int i = index / wordSize;
    int mask = 1 << (index % wordSize);
    
    return arr[i] & mask;
  }
  
  void BitArray::set(unsigned int index, bool val) {
    int i = index / wordSize;
    int mask = 1 << (index % wordSize);
  
    if (val == 0) {
      mask = ~mask;
      arr[i] &= mask;
    } else {
      arr[i] |= mask;
    }
  }
  
}
