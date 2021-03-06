# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        if root.right is None and root.left:
            return 1 + self.maxDepth(root.left)
        if root.left is None and root.right:
            return 1 + self.maxDepth(root.right)
        if root.left is None and root.right is None:
            return 1
            
        return 1 + max(self.maxDepth(root.right), self.maxDepth(root.left))