

class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

root = TreeNode('T')
nodeA= TreeNode('H')
nodeB= TreeNode('E')
nodeC = TreeNode('B')
nodeD =TreeNode('A')
nodeE = TreeNode('P')
nodeF= TreeNode('p')
nodeG = TreeNode('Y')

root.left = nodeA
root.right = nodeB

nodeA.left = nodeC
nodeA.right = nodeD

nodeB.left= nodeE
nodeB.right= nodeF

nodeF.left = nodeG

print("root.right.left.data: ", root.right.left.data)
