/*#########################
问题：输入n和k，从(0,1,2...,n)中选取k个数，输出可能的组合(数)。
##########################*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> res;

void print(vector<vector<int>> a){
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<a[i].size(); j++){
			cout << a[i][j] << " ";
		}
	cout << endl;
	}
}

void backtrack(vector<int>& nums, vector<int>& track, int k){
	if(track.size() == k){
        res.push_back(track);
        return;
	    }

    for(int i=0; i<nums.size(); i++){
		
		bool t = 1;
		if(track.empty()) t=1;
		else if(track[track.size()-1] < nums[i]) t=1;
		else t=0;

        if(t){
            track.push_back(nums[i]);
            backtrack(nums, track, k);
            track.pop_back();
        }
    }	
}

vector<vector<int>> combine(int n, int k) {
	vector<int> nums(n, 0);
	vector<int> track;
    for(int i=0; i<nums.size(); i++){
        nums[i] = i+1;
    }
    backtrack(nums, track, k);
    return res;
}

int main(){
	int n,k;
	cout << "enter number n = ";
	cin >> n;
	cout << "enter number k = ";
	cin >> k;
	combine(n, k);
	print(res);
	
	return 0;
}
