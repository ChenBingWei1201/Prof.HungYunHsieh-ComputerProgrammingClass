#include <iostream>
using namespace std;

int print(int n, char num[], int p, char arr[], int arrSize) {
    if (p == n) {
        for (int i = 0; i < arrSize; i++) {
            cout << arr[i];
        }
        cout << endl;
        return 1;
    }
    int count = 0;
    if (p + 1 < n && !(num[p + 1] - '0')) {
        arrSize++;
        p++;
    } else {
        arrSize++;
        arr[arrSize - 1] = num[p] - '0' + 'A' - 1;
        p++;
        count += print(n, num, p, arr, arrSize);
    }
    if (p < n && ((num[p - 1] - '0') * 10 + num[p] - '0' <= 26) && !(p + 1 < n && !(num[p + 1] - '0'))) {
        arr[arrSize - 1] = (num[p - 1] - '0') * 10 + num[p] - '0' + 'A' - 1;
        p++;
        count += print(n, num, p, arr, arrSize);
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    char num[n] = {};
    char arr[n] = {};
    cin >> num;
    cout << print(n, num, 0, arr, 0);
}
