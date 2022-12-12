#include <iostream>
using namespace std;
const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void printFlip(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

bool isSimetric(int matrix[][MAX_COLS], int rows, int cols) {
    if (rows != cols) {
        return false;
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }

    return true;
}

void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

void multiplyMatrixes(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        return;
    }

    int matrixResult[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            for (int k = 0; k < cols2; ++k) {
                matrixResult[i][k] += matrix1[i][j] * matrix2[j][k];
            }
        }
    }

    printMatrix(matrixResult, rows1, cols2);
}

void inputMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}
void GaussM( int arr[][MAX_COLS], int rows, int cols , int i , int j )
{
    /*for ( int k = 0 ; k < rows ; ++ k)
    {
        arr[k][j]=0;
    }
    for( int k = 0 ; k < cols ; ++k)
    {
        arr[i][k] = 0 ;
    }
    arr[i][j]=1;*/
    if ( ( i < 0 || i >= rows ) || ( j < 0 || j >= cols ))
    {
        cout << "Invalid indexes!" << endl ;
        return ;
    }

    for (int k = 0 ; k < rows ; ++ k)
    {
        arr[k][j]=0;
        if ( k == i ) {
            for ( int h = 0 ; h < cols ; ++ h )
            {
                arr[k][h] = 0;
                if ( h == j ) arr[k][h]=1;
            }
        }
        
    }
}

int main() {
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int rows1 = 2;
    int cols1 = 3;
    int rows2 = 3;
    int cols2 = 3;
    
    inputMatrix(matrix1, rows1, cols1);
    int i , j ;
    cin>>i>>j;
    GaussM( matrix1, rows1,cols1,i,j ) ;
    printMatrix(matrix1,rows1,cols1);
    //inputMatrix(matrix2, rows2, cols2);

    //multiplyMatrixes(matrix1, matrix2, rows1, cols1, rows2, cols2);

    // printFlip(matrix, rows, cols);
    // cout << boolalpha << isSimetric(matrix, rows, cols) << endl;

    return 0;
}