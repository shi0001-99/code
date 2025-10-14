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

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int max(int a, int b, int c) {
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    return c;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double q = max(a, b, c);
    double w = max(a + b, b, c);
    double e = max(a, b, b + c);
    double final = q / (w * e);
    
    cout << fixed << setprecision(3) << final;
    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int f(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}
int main() {
    int n;     
    cin >> n;     
    for (int i = 2; i <= n; i++) { 
        if (f(i) == i)             
            cout << i << endl; 
    }
    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return sum(n - 1) + n;
    }
}
int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int A(int a,int b) {
    if (a==0) {
        return b+1;
    }
    else if (b==0) {
        return A(a - 1, 1);
    }
    else {
        return A(a - 1, A(a, b - 1));
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << A(a, b)<<endl;
    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int is_prime(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int huiwen(int n) {
    int original_n = n;
    int reversed_n = 0;
    while (n != 0) {
        reversed_n = reversed_n * 10 + n % 10;
        n /= 10;
    }
    return original_n == reversed_n;
}

int main() {
    int n;
    cin >> n;
    int num = 0;
    for (int i = 11; i <= n; i++) {
        if (is_prime(i) && huiwen(i)) {
            num++;
        }
    }
    cout << num;
    return 0;
}




#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int is_prime(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i < n - 1; i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            cout << i << " " << i + 2 << endl;
            flag++;
        }
    }
    if (!flag)
    {
        cout << "empty";
    }
    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
char match(char x) {
    if (x == 'A')
        return 'T';
    if (x == 'T')
        return 'A';
    if (x == 'C')
        return 'G';
    if (x == 'G')
        return 'C';
}