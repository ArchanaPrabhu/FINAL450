#include<iostream>
#include<math.h>
using namespace std;


int main() {
int t;
cin >> t;
int arr[t];
for (int i=0;i<t;i++) {
    int k;
    cin >> k;
    arr[i] = k;
}

for (int i=0;i<t/2;i++) {
    int temp = arr[i];
    arr[i] = arr[t-1-i];
    arr[t-1-i] = temp;
}

for (int i=0;i<t;i++) {
    cout << arr[i] << " ";
}
}

