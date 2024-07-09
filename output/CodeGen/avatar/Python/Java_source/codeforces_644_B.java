import java.util.Queue;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.Iterator;

class Task {
    int time;
    int duration;
    int index;
    public Task(int time, int duration, int index) {
        this.time = time;
        this.duration = duration;
        this.index = index;
    }
}
class TaskQueue {
    private Queue<Task> queue;
    public TaskQueue() {
        queue = new java.util.PriorityQueue<Task>();
    }
    public void add(Task task) {
        queue.add(task);
    }
    public Task get() {
        return queue.poll();
    }
}
class Result {
    private Map<Integer, Integer> result;
    public Result() {
        result = new HashMap<Integer, Integer>();
    }
    public void put(int index, int finishTime) {
        result.put(index, finishTime);
    }
    public int get(int index) {
        return result.get(index);
    }
}
class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int b = in.nextInt();
        TaskQueue taskQueue = new TaskQueue();
        List<Task> tasks = new ArrayList<Task>();
        for(int i = 0; i < n; i++) {
            int time = in.nextInt();
            int duration = in.nextInt();
            int index = in.nextInt();
            tasks.add(new Task(time, duration, index));
        }
        for(Task task : tasks) {
            taskQueue.add(task);
        }
        Result result = new Result();
        while(!taskQueue.queue.isEmpty()) {
            Task task = taskQueue.get();
            if(task.time > result.get(task.index)) {
                result.put(task.index, task.time + task.duration);
            }
        }
        for(int i = 0; i < n; i++) {
            if(result.get(i)!= -1) {
                System.out.println(result.get(i));
            } else {
                System.out.println("-1");
            }
        }
    }
}