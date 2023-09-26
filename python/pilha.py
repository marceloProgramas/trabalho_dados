stack = [7,1,3]

print("pilha inicial: ", stack)
stack.append(5)
print("pilha com o 5: ", stack)
stack.append(3)
print("pilha com o 5 e o 3: ", stack)
print("o elemento do topo: ", stack[0])
stack.pop()
print("pilha sem o 3: ", stack)
stack.pop()
print("pilha sem o 5: ", stack)