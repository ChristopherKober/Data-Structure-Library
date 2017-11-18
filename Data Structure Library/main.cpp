//
//  main.cpp
//  Data Structure Library
//
//  Created by Kent Kober on 11/17/17.
//  Copyright © 2017 Kent Kober. All rights reserved.
//

#include <iostream>
#include "dsl/array/bitarray.h"

using namespace std;
using namespace dsl;

int main(int argc, const char * argv[]) {
  // Run performance tests
  
  BitArray b(100);
  
  b.set(4,1);
  cout << b.get(4) << endl << b.get(3) << endl;
  
  return 0;
}
