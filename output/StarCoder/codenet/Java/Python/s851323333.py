import sys

class Stack:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        return self.items[len(self.items)-1]

    def size(self):
        return len(self.items)

def main():
    stack = Stack()
    while True:
        line = sys.stdin.readline()
        if not line:
            break
        line = line.strip()
        if line == '0':
            if stack.isEmpty():
                print('error')
            else:
                print(stack.pop())
        else:
            stack.push(int(line))

if __name__ == '__main__':
    main()