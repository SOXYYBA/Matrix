#pragma once
#include <iostream>
using namespace std;

class CMatrix
{
private:
    int n, m;
    int** matrix;

    void Create()
    {
        matrix = new int* [m];
        for (int z = 0; z < m; z++)
            matrix[z] = new int[n];
    }

public:
    CMatrix() :n(30), m(30) { Create(); }

    CMatrix(int i1, int i2) :n(i1), m(i2) { Create(); }

    CMatrix(int i) :n(i), m(i) { Create(); }

    ~CMatrix()
    {}
    int& Element(int i, int j)
    {
        return matrix[i][j];
    }

    void View()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "   ";
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }

    CMatrix multiel(int k)
    {
        CMatrix temp(n, m);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.Element(i, j) = matrix[i][j] * k;
            }
        }
        return temp;
    }


    CMatrix plus(CMatrix b)
    {
        CMatrix temp(n, m);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                temp.Element(i, j) = matrix[i][j] + b.Element(i, j);
        return temp;
    }

    CMatrix minus(CMatrix b)
    {
        CMatrix temp(n, m);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                temp.Element(i, j) = matrix[i][j] - b.Element(i, j);
        return temp;
    }
    CMatrix scan()
    {
        int x, y;
        cout << "Введите количество столбцов матрицы" << endl;
        cin >> x;
        cout << "Введите количество строк матрицы" << endl;
        cin >> y;
        cout << endl << endl;
        n = x; m = y;
        CMatrix temp(n, m);
        cout << endl << "Вводите элементы матрицы(Элементы записываются построчно)" << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        return temp;
    }

    CMatrix Random(int x, int y)   //генерация матрицы Х * У из чисел от 0 до 2
    {
        n = x; m = y;
        CMatrix temp(n, m);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = 0 + rand() % 4;
        return temp;
    }

    CMatrix transp()
    {
        CMatrix temp(m, n);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                temp.Element(i, j) = matrix[j][i];
        return temp;
    }

    int GetX()
    {
        return n;
    }

    int GetY()
    {
        return m;
    }

    CMatrix multi(CMatrix a, CMatrix b)
    {
        m = a.GetY(); n = b.GetX();
        CMatrix temp(n, m);
        for (int i = 0; i < a.GetY(); i++)
            for (int j = 0; j < b.GetX(); j++)
                matrix[i][j] = 0;
        for (int i = 0; i < a.GetY(); i++)
            for (int j = 0; j < b.GetX(); j++)
                for (int k = 0; k < a.GetX(); k++)
                    matrix[i][j] += a.Element(i, k) * b.Element(k, j);
        return temp;
    }

    CMatrix eraseColumns(int indj)
    {
        CMatrix temp(n - 1, m);
        for (int j = 0; j < indj; j++)
            for (int i = 0; i < m; i++)
                temp.Element(i, j) = matrix[i][j];
        for (int j = indj + 1; j < n; j++)
            for (int i = 0; i < m; i++)
                temp.Element(i, j - 1) = matrix[i][j];
        return temp;
    }

    CMatrix eraseRows(int indi)
    {
        CMatrix temp(n, m - 1);
        for (int i = 0; i < indi; i++)
            for (int j = 0; j < n; j++)
                temp.Element(i, j) = matrix[i][j];
        for (int i = indi + 1; i < m; i++)
            for (int j = 0; j < n; j++)
                temp.Element(i - 1, j) = matrix[i][j];
        return temp;
    }


    double determinat2()
    {
        double result = 0; int h = 2;
        CMatrix temp;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < h; j++)
                temp.Element(i, j) = matrix[i][j];

        result = temp.Element(0, 0) * temp.Element(1, 1) - temp.Element(1, 0) * temp.Element(0, 1);
        return result;
    }

    double determinat3()
    {
        double result = 0; int h = 3;
        CMatrix temp;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < h; j++)
                temp.Element(i, j) = matrix[i][j];

        result = temp.Element(0, 0) * temp.Element(1, 1) * temp.Element(2, 2) + temp.Element(0, 1) * temp.Element(1, 2) * temp.Element(2, 0) + temp.Element(0, 2) * temp.Element(1, 0) * temp.Element(2, 1) - temp.Element(0, 2) * temp.Element(1, 1) * temp.Element(2, 0) - temp.Element(0, 1) * temp.Element(1, 0) * temp.Element(2, 2) - temp.Element(0, 0) * temp.Element(1, 2) * temp.Element(2, 1);
        return result;
    }
};
