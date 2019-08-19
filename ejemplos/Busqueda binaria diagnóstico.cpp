#include <iostream>
using namespace std;
 
 
const int SIZE = 4;
const int NOT_FOUND = -1;
int  binarySearch(int mat[][SIZE], int &line , int num);
int main()
{
    int num, index,  mat[SIZE][SIZE] = { 0,1,5,2,
                                         8,6,15,7,
                                         16,7,7,10,
                                         11,12,9,21 };
    int line = sizeof(mat) / sizeof(mat[0][0]);
    cout << "Ingrese el numero a buscar: " << endl;
    cin >> num;
    index = binarySearch(mat, line, num);
    if (index == NOT_FOUND)
        cout << "El valor: " << num << "No existe en el arreglo\n";
    else
        cout << "El valor: " << num << " existe en la linea " << line+1 <<" y la columna: " << index+1 << endl;
	return 0;
}
 
 
int binarySearch(int mat[][SIZE], int &line, int num)
{
    int j;
    for (j = 0; j < SIZE; j++)
    {
        int low = 0, high = SIZE - 1, middle;
        while (low <= high)
        {
            middle = (low + high) / 2;
                if (num == mat[middle][j])
                {
                    line = middle;
                    return j;
                }
                else if (num < mat[middle][j])
                    high = middle - 1;
                else
                    low = middle + 1;
        }
    }
    return NOT_FOUND;
}