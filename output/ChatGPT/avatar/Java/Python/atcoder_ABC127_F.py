import sys
import heapq

def main():
    t = int(sys.stdin.readline())
    pq_max = []
    pq_min = []
    sum_min = 0
    sum_max = 0
    sum_b = 0
    min_val = 0

    for _ in range(t):
        s = sys.stdin.readline().split()
        
        if s[0][0] == '2':
            ans = min_val * len(pq_min) - sum_min
            ans1 = min_val * len(pq_max) - sum_max
            sys.stdout.write(str(min_val) + " " + str(ans + ans1 + sum_b) + "\n")
        else:
            in_val = int(s[1])
            sum_b += int(s[2])
            
            if in_val > min_val:
                heapq.heappush(pq_max, in_val)
                sum_max += in_val
            else:
                heapq.heappush(pq_min, -in_val)
                sum_min -= in_val
            
            if len(pq_min) > len(pq_max):
                sum_max += pq_min[0]
                sum_min -= pq_min[0]
                heapq.heappush(pq_max, -heapq.heappop(pq_min))
            
            if len(pq_min) < len(pq_max):
                sum_max -= pq_max[0]
                sum_min += pq_max[0]
                heapq.heappush(pq_min, -heapq.heappop(pq_max))
            
            min_val = -pq_min[0]
    
    sys.stdout.flush()

if __name__ == "__main__":
    main()