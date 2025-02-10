class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

def traverseAndPrint(head):
    currentNode = head
    while currentNode:
        print(currentNode.data,  end=' -> ')
        currentNode = currentNode.next
    print('null')

node1 = Node(8)
node2 = Node(9)
node3 = Node(11)
node4 = Node(16)
node5 = Node(23)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

traverseAndPrint(node1)