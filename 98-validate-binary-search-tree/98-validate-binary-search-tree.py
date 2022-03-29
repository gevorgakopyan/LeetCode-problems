# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(root, leftVal, rightVal):
            if not root:
                return True
            if not (leftVal < root.val and rightVal > root.val):
                return False
            return validate(root.left, leftVal, root.val) and validate(root.right, root.val, rightVal)
        return validate(root, float('-inf'), float('inf'))