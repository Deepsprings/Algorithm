/*#######################
斐波那契数列问题
1. 结果会溢出整数范围，可以用数组表示结果，重载运算符。
#######################*/

#include<vector>
#include<iostream>
using namespace std;

// 动态规划
int Fib(int n){
	vector<int> result(n+1, 0);
	
	for(int i =0; i<n+1; i++){
		if(i <2){
			result[i] = i;
		}
		else{
			result[i] = result[i-1] + result[i-2];
		}
	}
	return result.back();
}

// 递归
int fib(int n){
	if(n < 2){
		 return n;
	}
	return fib(n-1) + fib(n-2);
}


int main(){
	int n;
	cout << "enter number n = ";
	cin >> n;
	// 溢出
	for(int i = 0; i<n; i++){
		int dp = Fib(i);
		cout << i<< ": " << dp << endl;
	}


//	unsigned long long dp = Fib(n);
//	int rf = fib(n);
//	cout << dp << endl;
//	cout << rf;

	return 0;
}
