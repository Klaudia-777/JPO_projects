//
// Created by klaudia on 09.11.18.
//

#ifndef JPO_MATRIX_H
#define JPO_MATRIX_H


#include <iostream>
#include <vector>
#include <cassert>


using namespace std;

class Matrix {
    int dim1;
    int dim2;
    vector<vector<float>> matrix;

public:

    Matrix(int dim1,int dim2,vector<vector<float>> matrix);
    Matrix (const Matrix& copy);
    ~Matrix();
    friend std::ostream &operator<<(std::ostream &os, const Matrix &arr);
    float operator()(int x,int y,bool set_or_get);
    friend Matrix &operator++( Matrix &arr);
    Matrix operator++(int);
    Matrix operator=(Matrix obj);
    void setValue(int x,int y,float value);
    float getValue(int x,int y);
};

#endif //JPO_MATRIX_H
