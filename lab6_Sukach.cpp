#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int arr[5];
    for(int i=0; i<5; i++){
        arr[i] = rand() % 100;
        cout << arr[i] << endl;
    }
    
    int sum = 0;
    int *ptr = arr;
    
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }
    
    cout << "Sum: " << sum << endl;

    return 0;
}