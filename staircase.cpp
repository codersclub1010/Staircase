// first read the Readme file to have more clarity
#include<iostream>
using namespace std;

class staircase{
    public:
        staircase(int n){
            for(int i=1;i<n+1;i++){
                for(int k=1;k<=n-i;k++){
                    printf(" ");  
                }
                for(int j=i;j>0;j--){
                    printf("#");
                }
            printf("\n");
            }
        }
};

int main(){

    int n;
    cout<<"Enter the size of staircase(n) : ";
    cin>>n;
    staircase s(n);
    return 0;

}