/* 
Ques. Print the following Pattern and get the output to match test cases?
To print the pattern like
for n=3
the program should print
1 1 1 2
3 2 2 2
3 3 3 4  */

#include <iostream>
using namespace std;
int main () {
    int n = 3;
    int c = 2;
    
    for (int i = 1; i<=3; i++) {
       
        if (i%2 == 0) {
        cout<<c<<" "; 
        c++;
        
        for (int j=1;j<=n;j++) {
            cout<<i<<" ";
        }
        }
        
        if(i%2 !=0) {
            for (int j=1; j<=n; j++){
                cout <<i<<" ";
            }
            cout<<c;c++;
        }
        cout<<endl;
        
    } return 0;
}