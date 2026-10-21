#include <iostream>
using namespace std;

void str_len(char stri[]){
    int count = 0;
    while (stri[count]){
        count++;
    }
    cout << "Length of string: " << count;
}
int main(){
    char c_srting[] = "Test String";
    str_len(c_srting);
    return 0;
}
