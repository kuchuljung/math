#include <iostream>

using namespace std;

void print(int x[3][3]) {
    cout << x[0][0] << " --- " << x[0][1] << " --- " << x[0][2] << endl;
    cout << x[1][0] << " --- " << x[1][1] << " --- " << x[1][2] << endl;
    cout << x[2][0] << " --- " << x[2][1] << " --- " << x[2][2] << endl;
    cout << endl;
}

void determinant(int x[3][3]) {
    int deter = x[0][0]*(x[1][1]*x[2][2]-x[1][2]*x[2][1]) - x[0][1]*(x[1][0]*x[2][2]-x[1][2]*x[2][0]) + x[0][2]*(x[1][0]*x[2][1]-x[1][1]*x[2][0]);
    cout << "Determinant: " << deter << endl;
    cout << endl;
}

void addMatrix(int x[3][3], int y[3][3]) {
    cout << "Add matrices 1 and 2" << endl;
    cout << x[0][0] + y[0][0] << " --- " << x[0][1] + y[0][1] << " --- " << x[0][2] + y[0][2] << endl;
    cout << x[1][0] + y[1][0] << " --- " << x[1][1] + y[1][1] << " --- " << x[1][2] + y[1][2] << endl;
    cout << x[2][0] + y[2][0] << " --- " << x[2][1] + y[2][1] << " --- " << x[2][2] + y[2][2] << endl;
    cout << endl;
}

void subMatrix12(int x[3][3], int y[3][3]) {
    cout << "Subtract matrix 2 from 1" << endl;
    cout << x[0][0] - y[0][0] << " --- " << x[0][1] - y[0][1] << " --- " << x[0][2] - y[0][2] << endl;
    cout << x[1][0] - y[1][0] << " --- " << x[1][1] - y[1][1] << " --- " << x[1][2] - y[1][2] << endl;
    cout << x[2][0] - y[2][0] << " --- " << x[2][1] - y[2][1] << " --- " << x[2][2] - y[2][2] << endl;
    cout << endl;
}

void subMatrix21(int x[3][3], int y[3][3]) {
    cout << "Subtract matrix 1 from 2" << endl;
    cout << y[0][0] - x[0][0] << " --- " << y[0][1] - x[0][1] << " --- " << y[0][2] - x[0][2] << endl;
    cout << y[1][0] - x[1][0] << " --- " << y[1][1] - x[1][1] << " --- " << y[1][2] - x[1][2] << endl;
    cout << y[2][0] - x[2][0] << " --- " << y[2][1] - x[2][1] << " --- " << y[2][2] - x[2][2] << endl;
    cout << endl;
}

// Manual multiplication using individual array elements

void multiplyMatrix(int x[3][3], int y[3][3]) {
    cout << "Multiply matrix 1 and 2" << endl;
    cout << x[0][0]*y[0][0] + x[0][1]*y[1][0] + x[0][2]*y[2][0] << " --- " << x[0][0]*y[0][1] + x[0][1]*y[1][1] + x[0][2]*y[2][1] << " --- " << x[0][0]*y[0][2] + x[0][1]*y[1][2] + x[0][2]*y[2][2] << endl;
    cout << x[1][0]*y[0][0] + x[1][1]*y[1][0] + x[1][2]*y[2][0] << " --- " << x[1][0]*y[0][1] + x[1][1]*y[1][1] + x[1][2]*y[2][1] << " --- " << x[1][0]*y[0][2] + x[1][1]*y[1][2] + x[1][2]*y[2][2] << endl;
    cout << x[2][0]*y[0][0] + x[2][1]*y[1][0] + x[2][2]*y[2][0] << " --- " << x[2][0]*y[0][1] + x[2][1]*y[1][1] + x[2][2]*y[2][1] << " --- " << x[2][0]*y[0][2] + x[2][1]*y[1][2] + x[2][2]*y[2][2] << endl;
    cout << endl;
}

int main() {
    int a[3][3];
    int b[3][3];
    int i, j, p, q;

    cout << "Enter matrix 1" << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    cout << "Enter matrix 2" << endl;

    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++)
            cin >> b[p][q];
    }

    cout << "Matrix 1" << endl;
    print(a);
    determinant(a);

    cout << "Matrix 2" << endl;
    print(b);
    determinant(b);

    addMatrix(a, b);
    subMatrix12(a, b);
    subMatrix21(a, b);
    multiplyMatrix(a, b);

    return 0;
}
