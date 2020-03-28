## 算法框架：
**路径:** 做出的选择
**选择列表:** 当前可以做的选择
**结束条件:** 到达决策树底层


```python
# python
result = []
def backtrack(路径, 选择列表):
	if 结束条件:
		result.add(路径)
		return
	for 选择 in 选择列表:
		做出选择
		backtrack(路径, 选择列表)
		撤销选择
```
```c
// c++
void backtrack(int i, int n, other parameters){
	if(i == n){
		record answer;
		return
	}

	for(选择 in 选择列表){
		backtrack(i+1, n)
	}
}
```

