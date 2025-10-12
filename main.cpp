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

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int is_prime(int n) {
    if (n == 2||n==3) {
        return 1;
    }
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            flag++;
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    cin >> n;
    int temp =n;
    for (int i = n-2; i >=n/2; i--) {
        if (is_prime(i)) {
            if (i < temp&&is_prime(n-i))
                temp = i;
        }
    }
    cout << temp*(n-temp)<<endl;
    
    return 0;
}