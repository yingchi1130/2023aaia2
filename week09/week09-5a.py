# 988. Smallest String Starting From Leaf
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        #要啜對照表, 把0..25 對應'a'...'z'
        table = "abcdefghijklmnopqrstuvwxyz" #字母對照表
        def helper(root, nowStr) : #nowStr 累積字串
            #if root==None: return nowStr #樹下沒有東西時,右邊累積的字串,就是結果
            nextStr = table[root.val] + nowStr
            if root.left==None and root.right==None: return nextStr #最後的葉子,沒有左右了
            if root.left==None: return helper(root.right, nextStr) #左邊空的,只能往右跑
            if root.right==None: return helper(root.left, nextStr) #右邊空的,只能往左跑
            #以下是健康的狀況, 左右都有分支, 就要兩邊都算, 再把小的當答案送出去
            left = helper(root.left, nextStr) #左邊的結果
            right = helper(root.right, nextStr) #右邊的結果
            return min(left, right) #結果小的,當答案,return回去

        #print("table[0] is ", table[0]) #只是試試看
        #print("table[25], is",table[25]) #只是先試試看
        return helper(root, '')