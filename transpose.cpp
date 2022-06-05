#include<iostream>
using namespace std;
class matrix{
    int m;
    int *mat;
    friend void transposematrix(matrix &obj);
    public:
    matrix(){
        cin>>m;
        mat=new int[m][m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                /* code */
                cin>>mat[i][j];
            }
            
        }
        
    }
    matrix(int n){
        m=n;
        mat=new int[m][m];
    
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                /* code */
                cin>>mat[i][j];
            }
            
        }
    }
    void display(){
        cout<<"matrix display:"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                /* code */
                cout<<mat[i][j];
            }
            cout<<endl;
            
        }
    }
};
void transposematrix(matrix &obj){
    int temp;
    for (int i = 0; i < obj.m; i++)
        {
            for (int j = 0; j < obj.m; j++)
            {
                if(i<j){
                    temp=obj.mat[i][j];
                    obj.mat[i][j]=obj.mat[j][i];
                    obj.mat[j][i]=temp;
                }
                
            }
            
        }


}
int main(){
    return 0;
}