#include <iostream>
using namespace std;

int main() {
    long long ans = 0;
    int r, g, b;
    cin >> r >> g >> b; // r顆r, g顆g, b顆b 
    long long ball[r + 1][g + 1][b + 1][3]; // 0表示r,1表示g,2表示b 
    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < g + 1; j++) {
            for (int k = 0; k < b + 1; k++) {
                for (int l = 0; l < 3; l++) {
                    ball[i][j][k][l] = 0;
                }
            }
        }
    }
    ball[0][0][0][0] = 1;
    ball[0][0][0][1] = 1;
    ball[0][0][0][2] = 1;
    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < g + 1; j++) {
            for (int k = 0; k < b + 1; k++) {
                for (int l = 0; l < 3; l++) {
                    if (l == 0) { // red
                        if (j) {
                            ball[i][j][k][l] += ball[i][j - 1][k][1];
                        }
                        if (k) {
                            ball[i][j][k][l] += ball[i][j][k - 1][2];
                        }
                    }
                    if (l == 1) { // blue
                        if (i) {
                            ball[i][j][k][l] += ball[i - 1][j][k][0];
                        }
                        if (k) {
                            ball[i][j][k][l] += ball[i][j][k - 1][2];
                        }
                    }
                    if (l == 2) { // green
                        if (i) {
                            ball[i][j][k][l] += ball[i - 1][j][k][0];
                        }
                        if (j) {
                            ball[i][j][k][l] += ball[i][j - 1][k][1];
                        }
                    }
                }
            }
        }
    }
    if (r) ans += ball[r - 1][g][b][0];
    if (g) ans += ball[r][g - 1][b][1];
    if (b) ans += ball[r][g][b - 1][2];
    cout << ans;
}
