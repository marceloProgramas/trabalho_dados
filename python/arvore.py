class Nodo:

  def __init__(self, key=None, left=None, right=None):
    self.key = key
    self.left = left
    self.right = right

  def __repr__(self):
    if self.left != None and self.right != None:
      return '%s <- %s -> %s' % (self.left and self.left.key,
                               self.key, self.right and self.right.key)
    elif self.right == None:
      return '%s <- %s' % (self.left and self.left.key, self.key)
    else:
      return '%s -> %s' %(self.key, self.right and self.right.key)


raiz = Nodo(3)
raiz.left = Nodo(5)
raiz.left.right = Nodo(3)

raiz.right = Nodo(1)
raiz.right.left = Nodo(7)
print("raiz: ", raiz)
print("esquerda: ", raiz.left)
print("direita: ", raiz.right)