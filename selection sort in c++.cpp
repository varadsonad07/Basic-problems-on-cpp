#include <iostream>
using namespace std;

int main() {
    int i, j, temp, n, c = 0;
    int position;
    cout << "Enter number range: \n";
    cin >> n;
    int a[n];
    cout << "Enter array elements: \n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

   for(i=0;i<n-1;i++){
		position = i;
		
		for(j=i+1;j<n;j++){
			if(a[position]>a[j]){
				position = j;
			}
		}
		if(position!=i){
		temp = a[i];
		a[i] = a[position];
		a[position] = temp;
	}
	c++;
	}	

    cout << "Total iterations is = " << c << endl;
    cout << "Sorted array is: \n";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

