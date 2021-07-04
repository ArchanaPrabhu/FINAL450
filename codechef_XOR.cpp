#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	int ans = 0;
	int N = 0, K = 0;
	
	while (T--) {
	    cin >> N >> K;
	    vector<int> A(N);
	    
	    for (int i=0;i<N;i++) {
	        cin >> A[i];
	    }
	    
	    vector<int> setBitArray(31);
	    int num;
	    for (int i = 0; i<31; i++) {
	        num = 0; 
	        for (int& j : A) {
	            if (j%2 != 0) {
	                num++;
	            }
	            j/=2;
	        }
	        setBitArray[i] = num;
	    }
	   ans = 0;
	   for (int i = 0; i<31; i++) {
	       if (setBitArray[i] % K != 0) {
	           ans += setBitArray[i]/K + 1;
	       } else {
	           ans += setBitArray[i]/K;
	       }
	   }
	   
	   cout << ans << endl;
	}
	return 0;
}
