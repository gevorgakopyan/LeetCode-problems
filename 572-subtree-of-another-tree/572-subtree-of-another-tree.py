# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSame(self, root, subroot):
        if root is None and subroot is None:
            return True
        if root is None or subroot is None:
            return False
        if root.val != subroot.val:
            return False
        return self.isSame(root.right, subroot.right) and self.isSame(root.left, subroot.left)
    
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not subRoot:
            return True
        if not root:
            return False
        if self.isSame(root,subRoot):
            return True
        
        return self.isSubtree(root.right,subRoot) or self.isSubtree(root.left,subRoot)