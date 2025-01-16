#include <iostream>
using namespace std;

int main() {
    int i, j, temp, n, c = 0;
    cout << "Enter number range: \n";
    cin >> n;
    int a[n];
    cout << "Enter array elements: \n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                c++;
            }
        }
    }

    cout << "Total iterations is = " << c << endl;
    cout << "Sorted array is: \n";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

