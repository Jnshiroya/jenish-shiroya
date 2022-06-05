/*write a programm for matrix row col value read from txt file also read value for matrix implement function for
display matrix multiply matrix
*/
#include<bits/stdc++.h>
using namespace std;
class mat{
    int **arr;
    int row,col;
    public:
    mat(string file)//take 1 argument of file name
    {
        fstream obj;
        obj.open(file, ios::in);
        obj>>row;
        obj>>col;
        //dynamic memory allocation for matrix 2D array as per required memory
        arr = new int*[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
      
        //take matrix value from file
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                obj>>arr[i][j];
            } 
        }    
        obj.close();
    }
    //that constructor for multiply matrix memory allocation
     mat(mat m1,mat m2)
    {
        col=m1.col;
        row=m2.row;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
    }
    //display matrix 
    void displaymatrix()
    {
        cout << "your matrix:" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout<<endl;
    }
    
    friend mat multiply(mat &,mat &);
};
//multiply matrix function
mat multiply(mat &ob1,mat &ob2){
    mat c(ob1,ob2);//declare new matrix
    if (ob1.row == ob2.col)//matrix multiplication condition
    {
        for (int i = 0; i < ob1.row; i++)
        {
            for (int j = 0; j < ob2.col; j++)
            {
                c.arr[i][j] = 0;
                for (int k = 0; k < ob1.row; k++)
                {
                    c.arr[i][j] += ob1.arr[i][k] * ob2.arr[k][j];
                }
            }
        }
        return c;
    }
    else
    {
        cout << "order is not correct." << endl;
        exit(0);
    }
}
int main(){
    mat m1("matrix1.txt");
    m1.displaymatrix();
    mat m2("matrix2.txt");
    m1.displaymatrix();
     mat multi = multiply(m1,m2);
     cout<<"MULTIPLE MATRIX :"<<endl;
     multi.displaymatrix();

    return 0;
}