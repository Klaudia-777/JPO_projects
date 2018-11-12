//
// Created by klaudia on 08.11.18.
//

#ifndef JPO_FLOATVECTOR_H
#define JPO_FLOATVECTOR_H

#include <vector>
#include <ostream>

using namespace std;

class FloatVector {
int length;
float *values;
public:

    FloatVector(int size);
    FloatVector (const FloatVector& copy);
    ~FloatVector();
    friend std::ostream &operator<<(std::ostream &os, const FloatVector &floatVector);
    float& operator[] (const int index);

    const FloatVector &operator++();
    const FloatVector operator++(int);
    FloatVector& operator=(FloatVector &floatvec);
    void pushBack(float number);
};
#endif //JPO_FLOATVECTOR_H
