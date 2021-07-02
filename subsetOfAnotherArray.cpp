#include<iostream>
using namespace std;

void maxProfit(int price[], int n) {
    int* profit = new int[n];
    for (int i=0;i<n;i++) {
        profit[i] = 0;
    }

    int max_price = price[n-1];
    for (int i=n-2;i>=0;i--) {
        if (price[i] > max_price) {
            max_price = price[i];
        }

        cout <<"mp : " << max_price << " : ";

        profit[i] = max(profit[i+1], max_price - price[i]);
        cout << profit[i+1] << " " << price[i] << " " << profit[i] << endl; 
    }

    for (int i=0;i<n;i++) {
        cout << profit[i] <<  " ";
    }
}

int main() { 
    
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    maxProfit(price, n);
    return 0;
}