# 学习笔记

### 泛型递归
找重复性
### 分治
分治是将一个大问题分成许多个小问题，分而治之，最后进行合并。
```
def divide_conquer(problem, param1, param2){
  # recursion terminator
  if problem == None:
  	print result
  	return 
  # process current logic (split your big problelm)
  
  # drill down (subproblems)
  
  # process	and merge (subresult)
  
  # reverse states
}
```
### 回溯
回溯主要就是试错，尝试去走一步，如果不行就取消取消上一步或上几步，走其他路来解决这个问题。
剪枝。