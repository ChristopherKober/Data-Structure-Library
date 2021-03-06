//
//  bitarray.h
//  Data Structure Library
//
//  Created by Kent Kober on 11/17/17.
//  Copyright © 2017 Kent Kober. All rights reserved.
//

#ifndef DSL_ARRAY_BITARRAY_H_
#define DSL_ARRAY_BITARRAY_H_

namespace dsl {

class BitArray {
  
  int * arr;
  int wordSize;
  
public:
  BitArray (unsigned int);
  ~BitArray();
  
  void set(unsigned int index, bool val);
  bool get(unsigned int index);

} ;

}

#endif // DSL_ARRAY_BITARRAY_H_
