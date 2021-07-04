#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<unsigned int> arr(n);
	    for (int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        int accLength = n-1;
        vector<unsigned int> forward_gcd(accLength);
        vector<unsigned int> backward_gcd(accLength);

        forward_gcd[0] = __gcd(arr[0],arr[1]);
        for (int i=1;i<accLength;i++) {
            forward_gcd[i] = gcd(forward_gcd[i-1],arr[i+1]);
        } 

        backward_gcd[accLength - 1] = __gcd(arr[n-2],arr[n-1]);

        for (int i = accLength - 2;i>0;i--) {
            backward_gcd[i] = __gcd(backward_gcd[i+1], arr[i]);
        }

        for (int i=0;i<accLength;i++) {
            cout << forward_gcd[i] << " ";
        }

        cout << endl;
        
        for (int i=accLength-1;i>=0;i--) {
            cout << backward_gcd[i] << " ";
        }

         cout << endl;

	} 
	return 0;
}
