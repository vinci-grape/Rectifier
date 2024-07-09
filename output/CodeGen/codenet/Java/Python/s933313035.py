def main():
    m = int(input())
    tree = None
    for i in range(m):
        command = input()
        if command == 'insert':
            key = int(input())
            if tree is None:
                tree = Node()
                tree.value = key
            else:
                tree.insert(key)
        else:
            if tree is not None:
                tree.printInOrder()
                print()
                tree.printPreOrder()
                print()

class Node:
    def __init__(self):
        self.value = 0
        self.left = None
        self.right = None
    def insert(self, key):
        if key < self.value:
            if self.left is None:
                self.left = Node()
                self.left.value = key
            else:
                self.left.insert(key)
        else:
            if self.right is None:
                self.right = Node()
                self.right.value = key
            else:
                self.right.insert(key)
    def printInOrder(self):
        if self.left is not None:
            self.left.printInOrder()
        print(self.value, end=' ')
        if self.right is not None:
            self.right.printInOrder()
    def printPreOrder(self):
        print(self.value, end=' ')
        if self.left is not None:
            self.left.printPreOrder()
        if self.right is not None:
            self.right.printPreOrder()

main()