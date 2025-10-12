#include<iostram>
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[101][101];
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a;
            arr[i][j] = a;
        }
    }
    for (int j = 0; j <m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}