class Node: 
    def __init__(self,data):
        self.data = data
        self.next = None
        self.prev = None

node1 = Node(5)
node2 = Node(7)
node3 = Node(11)
node4 = Node(14)

node1.next = node2

node2.prev = node1
node2.next = node3

node3.next= node4
node3.prev = node2

node4.prev= node3

print("\nTraversing forward:")
currentNode = node1
while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print('null')

print("\nTraversing backward:")
currentNode = node4
while currentNode:
    print(currentNode.data , end=' -> ')
    currentNode = currentNode.prev
print("null")
        