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
int main() {
    char arr[270];
    
    for (int i = 1; i <= 257; i++) {
        cin >> arr[i];
    }
    cout << arr[2];
    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int x1, y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int c = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    double d = sqrt(c);
    cout << fixed << setprecision(3) << d;

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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a,  b, c;
        cin >> a >> b >> c;
        sum += a * b * c;
    }
    int p = sum / m;
    if (sum % m)
        p++;
    if (sum % m)
        cout << p << " " << sum % m;
    else
        cout << p << " " <<  m;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 8 << " "<< (long long)12 * (n - 2) << " "<< (long long)6 * (n - 2) * (n - 2);
    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    
    for (int i = 1;; i++)
    {
        double a = (i -  1) / 5.0 ; double a1 = a * 4;
        double b = (a1 - 1) / 5.0 ; double b1 = b * 4;
        double c = (b1 - 1) / 5.0 ; double c1 = c * 4;
        double d = (c1 - 1) / 5.0 ; double d1 = d * 4;
        double e = (d1 - 1) / 5.0 ; double e1 = e * 4;
        if (a == (int)a && b == (int)b && c == (int)c && d == (int)d && e == (int)e) {
            cout << i << " " << e1;
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    for (int i = 1; ; i++) {
        int x = i;
        bool valid = true;
        for (int j = 0; j < 5; j++) {
            if ((x - 1) % 5 != 0) {
                valid = false;
                break;
            }
            x = (x - 1) / 5 * 4;
        }
        if (valid && x > 0) {
            cout << i << endl;  // 输出：3121
            break;
        }
    }
    
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 111 == 0) {
		cout << "NOT";
		return 0;
	}
	
	while (n != 495){
		cout << n << " ";
		int a = n % 10;
		int b = (n / 10) % 10;
		int c = n / 100;
		if (a > b)swap(a, b);
		if (b > c)swap(b, c);
		if (a > b)swap(a, b);
		int max = a + b * 10 + c * 100;
		int min = a * 100 + b * 10 + c;
		n=max - min;
	
    }
	cout << 495;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int f(int n) {
	int sum = 1;
	if (n == 1)
		return 1;

	else
		for (int i = 1; i < n; i++) {
			
			sum += f(n - i);
			
		}
	return sum;
	
}
int main() {
	int n;
	cin >> n;
	if (n < 1 || n>31) {
		cout << -1;
		return 0;
	}
	cout << f(n);
	return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n, price, m;
	cin >> n >> price >> m;
	int num = m / price;
	int left = num;
	while  (left >=n) {
		
		num += left / n;
		left = left - (left/ n) * n + left / n;
	}
	cout << num;
	return 0;
}

#include<iostream>
using namespace std;

long long combination(int n, int r) {
    
    if (r == 0 || r == n) return 1;

   
    if (r > n - r) r = n - r;

    long long result = 1;
    for (int i = 1; i <= r; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << combination(n, r);
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
double f_iterative(double x, double n) {
    double result = (double)x / (1 + x);  // n=1 的情况
    for (int i = 2; i <= n; i++) {
        result = (double)x / (i + result);
    }
    return result;
}

int main() {
    double x, n;
    cin >> x >> n;
    cout << fixed << setprecision(2) << f_iterative(x, n);
    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b)swap(a, b);
    if (b > c)swap(b, c);
    if (a > b)swap(a, b);
    if (a + b <= c) {
        cout << "No solution.";
        return 0;
    }
    double p = (a + b + c) / 2;
    double ss = p * (p - a) * (p - b) * (p - c);
    double s = sqrt(ss);
    cout << fixed << setprecision(2) << s;
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=false;
    if(n%4==0){
        flag=true;
        
}
    if(n%100==0)
        flag=false;
    if(n%400==0)
        flag=true;
    if( flag){
        cout<<"Y";
    }
    else
        cout<<"N";
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sum += i;
            count++;
        }
    }
    int sum2 = (1 + n) * n / 2-sum;
    cout <<fixed<<setprecision(1) <<sum * 1.0 / count <<" " << sum2 * 1.0 / (n - count);
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int arr[105];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n+1);
    cout << arr[1];

    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
bool isPalindrome(int x) {
    string str = to_string(x);
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    return str == reversed;
}
bool is_prime(int n) {
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            if (isPalindrome(i)) {
                if (is_prime(i))
                    cout << i << endl;
            }
        }
    }
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
int f(int n) {
    int final=0;
    if (n >= 0) {
        while (n != 0) {
            final = final * 10 + n % 10;
            n /= 10;
        }
        return final;
    }
    else {
        return -f(-n);
    }
}
int main() {
    int a;
    cin >>a ;
    cout << f(a);
    return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum=0;
    for (int i = 1; i < n-1; i++) {
        sum += arr[i];
    }
    cout << fixed << setprecision(2) << sum * 1.0 / (n - 2);
    return 0;
}