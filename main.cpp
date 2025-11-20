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

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 1;
    for (int i = n; i >=1; i--) {
        for (int j = 1; j <= i; j++) {

            if (c < 10) {
                cout << 0 << c;
                c++;
            }
            else {
                cout << c;
                c++;
            }
        }
        cout << endl;
        
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 高精度变量定义：
    vector<int> sum2 = {0};  // 阶乘和，初始为0（低位在前，如0的存储是[0]）
    vector<int> sum1 = {1};  // 当前阶乘i!，初始为1! = 1（存储为[1]）
    
    // 计算1!+2!+…+n!
    for (int i = 1; i <= n; i++) {
        // 步骤1：计算i! = (i-1)! * i（更新sum1）
        int carry = 0;  // 进位
        for (int j = 0; j < sum1.size(); j++) {
            long long product = (long long)sum1[j] * i + carry;  // 防止中间结果溢出
            sum1[j] = product % 10;  // 保留当前位
            carry = product / 10;    // 计算进位
        }
        // 处理剩余进位
        while (carry > 0) {
            sum1.push_back(carry % 10);
            carry /= 10;
        }
        
        // 步骤2：将i!加到sum2中（更新sum2）
        carry = 0;
        int k = 0;
        while (k < sum1.size() || k < sum2.size() || carry > 0) {
            int digit1 = (k < sum1.size()) ? sum1[k] : 0;  // sum1的第k位（低位）
            int digit2 = (k < sum2.size()) ? sum2[k] : 0;  // sum2的第k位（低位）
            int total = digit1 + digit2 + carry;           // 当前位总和
            if (k < sum2.size()) {
                sum2[k] = total % 10;  // 更新sum2的第k位
            } else {
                sum2.push_back(total % 10);  // 扩展sum2的长度
            }
            carry = total / 10;  // 计算进位
            k++;
        }
    }
    
    // 输出结果（从高位到低位）
    for (int i = sum2.size() - 1; i >= 0; i--) {
        cout << sum2[i];
    }
    cout << endl;
    
    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int f(int n,int x) {
    int count=0;
    int temp = n;
    while (temp != 0) {
        int s = temp % 10;
        if (s == x) {
            count++;
        }
        temp /= 10;
    }    
    return count;
}
int main() {
    int n, x;
    cin >> n >> x;
    int final=0;
    for (int i = 1; i <= n; i++) {
        final += f(i,x);
    }
    cout << final;
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
    int sum=0;
    int day = 0;
    for (int i = 1; day < n; i++) {
        for (int j = 1; j <= i; j++) {
            sum += i;
            day++;
            if (day >= n)
                break;
        }
    }
    cout << sum;

    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	double a = 2;
	double sum = 0;
	double s;
	cin >> s;
	int count = 0;
	for (int i=0; sum < s; i++) {
		sum += a;
		a = a * 0.98;
		count+=1;
	}
	cout << count ;
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
    int n;
    cin >> n;
    int a;
    cin >> a;
    int num = 1;
    int max = -1;
    for (int i = 1; i < n; i++) {
        int temp = a;
        cin >> a;
        if (a == temp+1) {
            num++;
        }
        if (max < num) {
            max = num;
        }
        if(a!=temp+1) {
            num = 1;
        }
    }
    cout << max;
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
    cin >>n ;
    arr[0] = n;
    int num = 1;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    else {
        for (int i = 1;; i++) {
            if (n % 2 == 0) {
                arr[i] = n / 2;
                n /= 2;
            }
            else {
                arr[i] = n * 3 + 1;
                n = n * 3 + 1;
            }
            num++;
            if (arr[i] == 1)
                break;

        }
    }
    for (int i = num - 1; i >= 0; i--) {
        cout << arr[i]<<" ";
    }

    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
double fun(double x, double y,double x1,double y1) {
	double ss = (x - x1) * (x - x1) + (y - y1) * (y - y1);
	double s = sqrt(ss);
	return s;
}
int main() {
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	double sum = fun(a, b, c, d) + fun(c,d,e,f) + fun(a, b, e, f);
	cout << fixed << setprecision(2) << sum;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
bool func(int a) {
	if (a == 1){
		return 0;
	}
	if (a == 2) {
		return 1;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (func(b)) {
			cout << b<<" ";
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
	int n, m;
	cin >> n >> m;
	int arr1[105];
	for (int i = 0; i < n; i++) {
		int arr[21];
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + m);
		int sum = 0;
		for (int k = 1; k < m - 1; k++) {
			sum += arr[k];
		}
		arr1[i] = sum;

	}
	sort(arr1, arr1 + n);
	cout << fixed << setprecision(2) << (double)arr1[n-1]/(m-2);
	return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int chin, math, eng,a,b,c;
	string name,top;
	int n;
	cin >> n;
	cin >> name;
	top = name;
	
	cin >> chin >> math >> eng;
	a = chin, b = math, c = eng;
	int temp = chin + math + eng;
	for (int i = 1; i < n; i++) {
		cin >> name;
		cin >> chin >> math >> eng;
		if (chin + math + eng > temp) {
			top = name;
			a = chin, b = math, c = eng;

		}
		temp = a + b + c;
	}
	cout << top << " " << a << " " << b << " " << c;

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
	string nrr[1005];
	int arr[1005], brr[1005], crr[1005];

	for (int i = 0; i < n; i++) {
		cin >> nrr[i] >> arr[i] >> brr[i] >> crr[i];

	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(arr[i] - arr[j]) <= 5 && abs(brr[i] - brr[j]) <= 5 && abs(crr[i] - crr[j]) <= 5 && abs(arr[i] + brr[i] + crr[i] - arr[j] - brr[j] - crr[j]) <= 10)
				cout << nrr[i] << " " << nrr[j] << endl;
		}
	}

	return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
struct node {
    int id;//学号
    double sc1, sc2;//学业成绩和素质拓展成绩
    int score;//学业成绩和素质拓展成绩的和
    double final_score;//综合分数
}a[1000];//结构体定义，由于本人习惯（懒），sc1和sc2定义成了double。
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].sc1 >> a[i].sc2;
        a[i].score = a[i].sc1 + a[i].sc2;
        a[i].final_score = a[i].sc1 * 0.7 + a[i].sc2 * 0.3;//计算综合分数
    }
    for (int i = 0; i < n; i++) {
        if (a[i].score > 140 && a[i].final_score >= 80) {//一定看清题
            cout << "Excellent" << endl;
        }
        else {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
bool nf(int a, int b, int c) {
    if (a + b <= c) {
        return 1;
    }
    else
        return 0;
}
bool rf(int a, int b, int c) {
    if (a * a + b * b == c * c) {
        return 1;
    }
    else
        return 0;
}
bool af(int a, int b, int c) {
    if (a * a + b * b > c * c) {
        return 1;
    }
    else
        return 0;
}
bool of(int a, int b, int c) {
    if (a * a + b * b < c * c) {
        return 1;
    }
    else
        return 0;
}
bool itf(int a, int b, int c) {
    if (a==b||b==c||a==c) {
        return 1;
    }
    else
        return 0;
}
bool ef(int a, int b, int c) {
    if (a==c) {
        return 1;
    }
    else
        return 0;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }
    if (nf(a, b, c)) {
        cout << "Not triangle"<<endl;
        return 0;
    }
    if (rf(a, b, c)) {
        cout << "Right triangle" << endl;
    }
    if (af(a, b, c)) {
        cout << "Acute triangle" << endl;
    }
    if (of(a, b, c)) {
        cout << "Obtuse triangle" << endl;
    }
    if (itf(a, b, c)) {
        cout << "Isosceles triangle" << endl;
    }
    if (ef(a, b, c)) {
        cout << "Equilateral triangle";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

string a[10][5];
char num[102];

int main(){
	//freopen("screen.in","r",stdin);
	//freopen("screen.out","w",stdout);
	int n;
	cin>>n;
	a[0][0]="XXX";
	a[0][1]="X.X";
	a[0][2]="X.X";
	a[0][3]="X.X";
	a[0][4]="XXX";
	
	a[1][0]="..X";
	a[1][1]="..X";
	a[1][2]="..X";
	a[1][3]="..X";
	a[1][4]="..X";
	
	a[2][0]="XXX";
	a[2][1]="..X";
	a[2][2]="XXX";
	a[2][3]="X..";
	a[2][4]="XXX";
	
	a[3][0]="XXX";
	a[3][1]="..X";
	a[3][2]="XXX";
	a[3][3]="..X";
	a[3][4]="XXX";
	
	a[4][0]="X.X";
	a[4][1]="X.X";
	a[4][2]="XXX";
	a[4][3]="..X";
	a[4][4]="..X";
	
	a[5][0]="XXX";
	a[5][1]="X..";
	a[5][2]="XXX";
	a[5][3]="..X";
	a[5][4]="XXX";
	
	a[6][0]="XXX";
	a[6][1]="X..";
	a[6][2]="XXX";
	a[6][3]="X.X";
	a[6][4]="XXX";
	
	a[7][0]="XXX";
	a[7][1]="..X";
	a[7][2]="..X";
	a[7][3]="..X";
	a[7][4]="..X";
	
	a[8][0]="XXX";
	a[8][1]="X.X";
	a[8][2]="XXX";
	a[8][3]="X.X";
	a[8][4]="XXX";
	
	a[9][0]="XXX";
	a[9][1]="X.X";
	a[9][2]="XXX";
	a[9][3]="..X";
	a[9][4]="XXX";
	
	for(int i=0; i<n; i++) cin>>num[i];
	for(int j=0; j<5; j++){
		for(int i=0; i<n; i++){
			cout<<a[num[i]-'0'][j];
			if(i!=n-1) printf(".");
		}
		printf("\n");
	}
	return 0;
}


#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int dp[1001] = { 0 };
	dp[0] = 1;
	int coin = 1;
	while (coin <= n) {
		for (int i = coin; i <= n; i++) {
			dp[i] += dp[i - coin];
		}
		coin *= 2;
	}
	cout << dp[n];
	return 0;
}

12345678
12