#include <iostream>
using namespace std;

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrix(int A[10][10], int B[10][10], int rows, int cols)
{
    int C[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Addition of matrices:\n";
    displayMatrix(C, rows, cols);
}

void subtractMatrix(int A[10][10], int B[10][10], int rows, int cols)
{
    int C[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction of matrices:\n";
    displayMatrix(C, rows, cols);
}

void multiplyMatrix(int A[10][10], int B[10][10],
                    int r1, int c1, int r2, int c2)
{
    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible.\n";
        return;
    }

    int C[10][10] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Multiplication of matrices:\n";
    displayMatrix(C, r1, c2);
}

void transposeMatrix(int A[10][10], int rows, int cols)
{
    int T[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose of matrix:\n";
    displayMatrix(T, cols, rows);
}

int main()
{
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;
    char choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    inputMatrix(A, r1, c1);

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    inputMatrix(B, r2, c2);

    cout << "\nChoose an operation:\n";
    cout << "A. Addition\n";
    cout << "B. Subtraction\n";
    cout << "C. Multiplication\n";
    cout << "D. Transpose\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 'A':
        case 'a':
            if (r1 == r2 && c1 == c2)
                addMatrix(A, B, r1, c1);
            else
                cout << "Addition is not possible. Dimensions must be same.";
            break;

        case 'B':
        case 'b':
            if (r1 == r2 && c1 == c2)
                subtractMatrix(A, B, r1, c1);
            else
                cout << "Subtraction is not possible. Dimensions must be same.";
            break;

        case 'C':
        case 'c':
            multiplyMatrix(A, B, r1, c1, r2, c2);
            break;

        case 'D':
        case 'd':
            transposeMatrix(A, r1, c1);
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}