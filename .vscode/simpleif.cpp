#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x == 5){
        x = x + 1;
        cout << "nilai x sudah dikoreksi menjadi : " << x << endl;
    }

    cout << "Bilangan yang diberikan = " << x;
    
    return 0;
}
//commit 1
// bilangan yang diberikan 4
//if
//nilai x sudah di koreksi
//return 0