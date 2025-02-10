class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


def findLowestValue(head):
    minValue = head.data
    currentNode = head.next 
    while currentNode:
        if currentNode.data < minValue:
            minValue = currentNode.data
        currentNode = currentNode.next
    return minValue


def findHighestValue(head):
    maxValue = head.data
    currentNode = head.next 
    while currentNode:
        if currentNode.data > maxValue:
           maxValue = currentNode.data
        currentNode = currentNode.next
    return maxValue

node1 = Node(7)
node2 = Node(11)
node3 = Node(45)
node4 = Node(19)
node5 = Node(23)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

print("Find the lowest value in the linked list is: ", findLowestValue(node1))
print("Find the highest value in the linked list is: ", findHighestValue(node1))