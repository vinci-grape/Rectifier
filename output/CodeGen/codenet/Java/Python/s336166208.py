class Main:
    def main(self):
        info = [[[0 for x in range(10)] for y in range(3)] for z in range(4)]
        for i in range(4):
            for j in range(3):
                for k in range(10):
                    info[i][j][k] = 0
        n = int(input())
        for i in range(n):
            built = int(input())
            floor = int(input())
            room = int(input())
            num = int(input())
            info[built - 1][floor - 1][room - 1] += num
        for i in range(4):
            for j in range(3):
                for k in range(10):
                    print(" " + info[i][j][k])
                print("\n")
            if i!= 4 - 1:
                print("####################\n")

if __name__ == "__main__":
    main = Main()
    main.main()