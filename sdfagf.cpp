#include<iostream>
#include<climits>
using namespace std;
class matrix{
    int mat[3][3];
    int maxele=0;
    int col ,row;
    friend void multiplication(matrix m1,matrix m2);
    public:
    
    matrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>mat[i][j];
            }
        }

    }
    void findmaxelement(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(mat[i][j]>maxele){
                    maxele = max(maxele,mat[i][j]);
                    col=j;
                    row=i;
                }
            }
        }


    }
    void display(){
        cout<<"maximum value in matrix:"<<maxele<<endl;
        cout<<"position of row:"<<row+1<<endl;
        cout<<"position of column:"<<col+1<<endl;
        
    }
    
};
void multiplication(matrix m3,matrix m4){
    int mul[3][3];
    
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                 mul[i][j]=0;
                for(int k=0;k<3;k++){
                mul[i][j] = mul[i][j] + (m3.mat[i][k]*m4.mat[k][j]);
                }

                
            }
        }cout<<"*****************************"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }

}
int main(){
    matrix m1;
    m1.findmaxelement();
    m1.display();
    matrix m2;
    m2.findmaxelement();
    m2.display();
    multiplication(m1, m2);

    return 0;
}