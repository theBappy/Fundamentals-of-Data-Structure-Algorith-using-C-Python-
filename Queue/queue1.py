class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []
    
    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        return self.items.pop()
    
    def size(self):
        return len(self.items)
    
q = Queue()
q.enqueue(4)
q.enqueue('dog')
q.enqueue(True)
print(q.size())
q.dequeue()
print(q.size())

# queue = []

# queue.append('A')
# queue.append('B')
# queue.append('C')
# print("Queue: ", queue)

# element = queue.pop(0)
# print("Dequeue: ", element)

# frontElement = queue[0]
# print('Peek: ', frontElement)


# isEmpty = not bool(queue)
# print("IsEmpty: ", isEmpty)

# print("Size: ",len(queue))