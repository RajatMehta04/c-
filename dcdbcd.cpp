#include <iostream>
using namespace std;

int main(){

    int row,col,n;
    cout << "enter the no:" << endl;
    cin >> n;
     row = 1;
     

    while (row <=n){
col = 1;
    char ch = 'A'+n-row;

        while (col <= row){
            cout << ch << " ";
            col= col + 1;
            ch = ch + 1;
         
    }
    cout << endl;
    row =row +1;}
}