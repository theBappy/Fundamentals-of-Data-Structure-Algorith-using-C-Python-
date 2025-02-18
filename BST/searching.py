class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def search(node, target):
    if node is None:
        return None
    elif node.data == target:
        return node
    elif target < node.data:
        return search(node.left , target)
    else:
        return search(node.right , target)
    

def insert(node, data):
    if node is None:
        return TreeNode(data)
    else:
        if data < node.data :
            node.left = insert(node.left, data)
        elif data > node.data :
            node.right = insert(node.right, data)
    return node

def minValueNode(node):
    current = node
    while current.left is not None:
        current = current.left
    return current


def delete(node, data):
    if not node:
        return None
    
    if data < node.data:
        node.left = delete(node.left, data)
    elif data > node.data:
        node.right = delete(node.right, data)
    else:
        if not node.left:
            temp = node.right
            node = None
            return temp
        elif not node.right:
            temp = node.left
            node = None
            return temp


root = TreeNode(13)
node7 = TreeNode(7)
node15 = TreeNode(15)
node3 = TreeNode(3)
node8 = TreeNode(8)
node14 = TreeNode(14)
node19 = TreeNode(19)
node18 = TreeNode(18)

root.left = node7
root.right = node15

node7.left = node3
node7.right = node8

node15.left = node14
node15.right = node19

node19.left = node18

result = search(root, 10)

# Inserting new value into the BST
insert(root, 8)


if result:
    print(f"Found the node with value : {result.data}")
else:
    print("Value not found in the BST")
    