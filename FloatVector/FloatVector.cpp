//
// Created by klaudia on 08.11.18.
//

#include <iostream>
#include "FloatVector.h"


FloatVector::FloatVector(int size) {
    this->length=size;
    values=new float[size];
}

FloatVector ::FloatVector (const FloatVector& copy)
        : length(copy.length), values(copy.values)
{ }

std::ostream &operator<<(std::ostream &os, const FloatVector &floatVector) {
    for (int i = 0; i < floatVector.length; ++i) {
        os << floatVector.values[i] << " ";
    }
    return os;
}

FloatVector::~FloatVector() {
delete [] values;
}

float &FloatVector::operator[](const int index) {
     return values[index];
}

const FloatVector& FloatVector::operator++() {

    for (int i = 0; i <length ; ++i) {
        ++values[i];
    }
    return *this;
}
const FloatVector FloatVector::operator++(int) {
   FloatVector tmp(length);
    for (int i = 0; i <length ; ++i) {
        tmp.values[i] = values[i];

        ++values[i];
    }

    return tmp;
}

void FloatVector::pushBack(float number) {
   // length++;
    FloatVector tmp(length+1);

    for (int i = 0; i < length+1; ++i) {
        if(i==length) {tmp.values[i]=number;}
        else tmp.values[i]=values[i];
    }
    this->length++;
    for (int i = 0; i < length; ++i) {
         values[i]=tmp.values[i];
    }

}

FloatVector& FloatVector::operator=(FloatVector &floatvec) {


    for (int i = 0; i < length; ++i) {
      values[i]=floatvec.values[i];
    }
    values[0]=floatvec.values[0];
    values[1]=floatvec.values[1];

    return *this;
}
