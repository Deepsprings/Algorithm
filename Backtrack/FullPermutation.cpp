/*###################
全排列问题
##################*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> res;

bool find(vector<int> a, int b){
	for(int i=0; i<a.size(); i++){
		if(a[i] == b) return true;
	}
	return false;
}

void print(vector<vector<int>> a){
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<a[i].size(); j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


void backtrack(vector<int> nums, vector<int> track){
	if(track.size() == nums.size()){
		res.push_back(track);
		return;
	}

	for(int i=0; i<nums.size(); i++){
		if(! find(track, nums[i])){
		track.push_back(nums[i]);
		backtrack(nums, track);
		track.pop_back();
		}
	}
}


int main(){
	int n;
	cout << "enter number n = ";
	cin >> n;
	
	vector<int> nums(n, 0);
	for(int i=0; i<n; i++){
		nums[i] = i+1;
	}
	
	vector<int> track;
	backtrack(nums, track);
	print(res);	

	return 0;
}
