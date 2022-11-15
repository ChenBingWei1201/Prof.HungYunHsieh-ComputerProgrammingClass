#include <iostream>
using namespace std;

int visited[100][100]={0};
char mp[100][100];
int r,c;

void dfs(int i,int j) {
    if(i<0||i>=r||j<0||j>=c||visited[i][j]==1||mp[i][j]=='*')
        return;
    visited[i][j]=1;

    dfs(i-1,j-1);
    dfs(i-1,j);
    dfs(i-1,j+1);
    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i+1,j-1);
    dfs(i+1,j);
    dfs(i+1,j+1);
}

int main(){

    while(cin >> r >> c && r>0 && c>0) {
        int cnt=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++) {
                cin >> mp[i][j];
                visited[i][j]=0;
            } 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mp[i][j]=='@'&&visited[i][j]==0){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
