#include <iostream>
using namespace std;
void accept(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void display(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << mat[i][j];
        }
        cout << endl;
    }
}

void mutli(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    cout << "Resultant matrix : " << endl;
    display(mat3);
}
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];
    cout << "Enter element of first matrix : ";
    accept(mat1);

    cout << "First matrix : " << endl;
    display(mat1);

    cout << "Enter elements of second matrix : ";
    accept(mat2);

    cout << "Second matrix : " << endl;
    display(mat2);

    mutli(mat1, mat2, mat3);
    return 0;
}