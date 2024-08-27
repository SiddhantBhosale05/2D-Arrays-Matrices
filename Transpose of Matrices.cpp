//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of 2D Arrays - Matrices to Transpose of Matrices

#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {{2,3,4},{4,5,6},{5,6,7}};

for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        A[i][j] = A[j][i];
    }
}
cout << "The original matrix is:"<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        cout << A[i][j]<< " ";
    }
    cout << endl;
}
cout << endl;
cout << "The tranpose of matrix is: ";
for(int i = 0;i<3;i++)
{
    cout << endl;
    for(int j = 0;j<3;j++)
    {
        cout << A[j][i] << " ";
    }
} 

    return 0;
}


/*Output:
The original matrix is:
2 4 5 
4 5 6 
5 6 7 

The tranpose of matrix is: 
2 4 5 
4 5 6 
5 6 7 */