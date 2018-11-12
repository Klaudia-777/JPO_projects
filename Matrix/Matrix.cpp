//
// Created by klaudia on 09.11.18.
//

#include "Matrix.h"

Matrix::Matrix(int dim1,int dim2,vector<vector<float>> mat) {
  this->dim1=dim1;
  this->dim2=dim2;
  this->matrix=mat;

    for (int i = 0; i < dim1; ++i) {
        matrix.emplace_back(0.0);
        for (int j = 0; j < dim2; ++j) {
            matrix[i].emplace_back(0.0);
        }
    }

}

Matrix::Matrix (const Matrix& copy)
        : dim1(copy.dim1), dim2(copy.dim2), matrix(copy.matrix)
{ }

Matrix :: ~Matrix(){};

std::ostream &operator<<(std::ostream &os, const Matrix &arr) {

    for (int i = 0; i < (arr.matrix).size(); ++i) {
        for (int j = 0; j <arr.matrix[0].size(); ++j) {
           cout << arr.matrix[i][j] << " ";
        }
        os << endl;
    }
    return os;
}


float Matrix::operator()(int x, int y, bool set_or_get) {

    assert(x >= 0 && x < dim1);
    assert(y >= 0 && y < dim2);
    if(set_or_get) {
    float value;
    cout << "Enter a value:" << endl;
    cin >> value;
    matrix[x][y]=value;
    }
    else if(!set_or_get) return matrix[x][y];

}



Matrix &operator++( Matrix &arr) {

    for (int i = 0; i < arr.dim1; ++i) {
        for (int j = 0; j < arr.dim2; ++j) {
            arr.matrix[i][j]++;
        }
    }
    return arr;
}

Matrix Matrix :: operator++(int) {
    Matrix tmp(*this);
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            matrix[i][j]++;
        }
    }
    return tmp;
}


void Matrix::setValue(int x, int y, float val) {
    assert(x >= 0 && x < dim1);
    assert(y >= 0 && y < dim2);
    matrix[x][y]=val;
}

float Matrix::getValue(int x, int y) {
    assert(x >= 0 && x < dim1);
    assert(y >= 0 && y < dim2);
    return matrix[x][y];
}



Matrix Matrix ::operator=(Matrix obj) {
    assert(dim1==obj.dim1);
    assert(dim2==obj.dim2);
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j <dim2; ++j) {
            matrix[i][j]=obj.matrix[i][j];
        }
    }
    return *this;
}


