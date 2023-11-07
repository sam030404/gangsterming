#include <iostream>
#include <string>

using namespace std;

void moving(int j,int k,int i,int** matrix,int n){

if(i==(n*n)+1){
    return ;
}
    
else if((j==0)&&(k<(n-1))){
    matrix[n-1][k+1]=i;
    i++;

    moving(n-1,k+1,i,matrix,n);
    
            
}//첫번재 열에 있을 떄 ㄱ자 이동

else if(k==(n-1)&&(j>0)){
    matrix[j-1][0]=i;
    i++;
    moving(j-1,0,i,matrix,n);

}// 맨 왼쪽 열에 있을때 ㄴ자 이동

else if(k==(n-1)&&(j==0)){
    matrix[1][n-1]=i;
    i++;
    moving(1,n-1,i,matrix,n);

}//겹치는 부분 규칙

else if((k<n-1)&&(j>0)){
    if(matrix[j-1][k+1]==0){
        matrix[j-1][k+1]=i;
        i++;
        moving(j-1,k+1,i,matrix,n);

    }
    else{
        matrix[j+1][k]=i;
        i++;
        moving(j+1,k,i,matrix,n);
    }
    


}

}
void magicSquare(int n,int** matrix){

    
    matrix[0][(n-1)/2]=1;
    moving(0,(n-1)/2,2,matrix,n);

}

int main(){
    int N;
    cin>>N;
    if((N%2)!=0){
    int** matrix=new int* [N];
    for(int i=0;i<N;i++){
        matrix[i]=new int[N];
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matrix[i][j]=0;
        }
        
    }
    magicSquare(N,matrix);


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    delete[] matrix;
    
    
    }

    return 0;





}


