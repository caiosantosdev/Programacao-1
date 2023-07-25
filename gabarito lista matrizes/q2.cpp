#include <iostream>

using namespace std;

int menor(int mat[10][5]) 
{
    int resp = mat[0][0];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(mat[i][j]<resp) {
                resp = mat[i][j];
            }
        }
    }
    return resp;
}

int main() {
    int mat[10][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2,-3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    cout << menor(mat) << endl;
}