// matrix.h

#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int** data; // двумерный массив
    unsigned int m; // количество строк
    unsigned int n; // количество столбцов

public:
    Matrix(unsigned int rows, unsigned int cols); // конструктор
    ~Matrix(); // деструктор

    int* operator[](unsigned int index); // оператор доступа по индексу

    void fillRandom(); // метод заполнения массива случайными значениями

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix); // оператор вывода в поток

    Matrix& operator+=(const Matrix& other); // оператор +=
    Matrix operator+(const Matrix& other) const; // оператор +
    Matrix& operator-=(const Matrix& other); // оператор -=
    Matrix operator-(const Matrix& other) const; // оператор -
    Matrix operator*(const Matrix& other) const; // оператор *

    bool operator!=(const Matrix& other) const; // оператор !=
    bool operator==(const Matrix& other) const; // оператор ==
};

#endif
