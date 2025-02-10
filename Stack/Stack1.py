stack = []

stack.append('A')
stack.append('B')
stack.append('C')
stack.append('D')
print("Stack: ", stack)

element = stack.pop()
print("Pop: ", element)


topElement = stack[-1]
print("Peek: ", topElement)

isEmpty = not bool(stack)
print("isEmpty: ", isEmpty)

print('Size: ', len(stack))
