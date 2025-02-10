class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

node1 = Node(23)
node2 = Node(11)
node3 = Node(45)
node4 = Node(13)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = None

currentNode = node1
while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print('null')