/* Ques. Print the following Pattern and get the OutPut?
N=5
Output
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int current = 1;

    for (int i = 1; i <= n; i++) {
        
        //odd row  - inc
        
        if (i % 2 != 0) {   
            int temp = current;
            for (int j = 1; j <= i; j++) {
                cout << temp;
                if (j != i) cout << "*";
                temp++;
            }
        }
        else {
            int temp = current + i -1;
            for (int j=1; j<= i; j++) {
                cout << temp;
                if (j!=i) cout<<"*";
                temp--;
            }
            
        }
            current += i;
            cout << endl;
            }
        

    return 0;
}
