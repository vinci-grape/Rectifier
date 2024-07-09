import java.util.*;
import java.io.*;
public class atcoder_ABC146_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer>[] G = new ArrayList[N];
        HashMap<Integer, Integer> E = new HashMap<>();
        for (int i = 0; i < N; i++) {
            G[i] = new ArrayList<>();
        }
        for (int i = 0; i < N - 1; i++) {
            int a = sc.nextInt() - 1;
            int b = sc.nextInt() - 1;
            G[a].add(b);
            G[b].add(a);
            E.put((a < b ? a : b) * N + (a < b ? b : a), 0);
        }
        int K = bfs(0, N, G, E);
        System.out.println(K);
        for (int value : E.values()) {
            System.out.println(value);
        }
    }
    public static int bfs(int v, int N, ArrayList<Integer>[] G, HashMap<Integer, Integer> E) {
        boolean[] visited = new boolean[N];
        Queue<Integer> queue = new LinkedList<>();
        int K = -1;
        int[] node2color = new int[N];
        queue.add(v);
        visited[v] = true;
        while (!queue.isEmpty()) {
            int q = queue.poll();
            int color = 0;
            for (int nex : G[q]) {
                if (visited[nex]) {
                    continue;
                }
                visited[nex] = true;
                color++;
                if (color == node2color[q]) {
                    color++;
                }
                node2color[nex] = color;
                E.put((q < nex ? q : nex) * N + (q < nex ? nex : q), color);
                queue.add(nex);
            }
            K = Math.max(K, color);
        }
        return K;
    }
}



Translate the above Java code to C++.

C++ Code:

#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
int bfs(int v, int N, vector<int> G[], map<int, int> &E) {
    bool visited[N];
    queue<int> queue;
    int K = -1;
    int node2color[N];
    queue.push(v);
    visited[v] = true;
    while (!queue.empty()) {
        int q = queue.front();
        queue.pop();
        int color = 0;
        for (int nex : G[q]) {
            if (visited[nex]) {
                continue;
            }
            visited[nex] = true;
            color++;
            if (color == node2color[q]) {
                color++;
            }
            node2color[nex] = color;
            E[(q < nex ? q : nex) * N + (q < nex ? nex : q)] = color;
            queue.push(nex);
        }
        K = max(K, color);
    }
    return K;
}
int main() {
    int N;
    cin >> N;
    vector<int> G[N];
    map<int, int> E;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
        E.insert(pair<int, int>((a < b ? a : b) * N + (a < b ? b : a), 0));
    }
    int K = bfs(0, N, G, E);
    cout << K << endl;
    for (auto value : E) {
        cout << value.second << endl;
    }
    return 0;
}



Translate the above C++ code to C.

C Code:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#define INF INT_MAX
#define MAX_N 100000
typedef struct {
    int *G[MAX_N];
    int *node2color;
    int *visited;
    int *queue;
    int *E;
    int N;
    int K;
} Graph;
void init_graph(Graph *graph) {
    graph->node2color = (int *)malloc(sizeof(int) * graph->N);
    graph->visited = (int *)malloc(sizeof(int) * graph->N);
    graph->queue = (int *)malloc(sizeof(int) * graph->N);
    graph->E = (int *)malloc(sizeof(int) * graph->N * graph->N);
    for (int i = 0; i < graph->N; i++) {
        graph->G[i] = (int *)malloc(sizeof(int) * graph->N);
        graph->node2color[i] = 0;
        graph->visited[i] = 0;
        graph->queue[i] = 0;
        graph->E[i] = 0;
        for (int j = 0; j < graph->N; j++) {
            graph->G[i][j] = 0;
        }
    }
}
void free_graph(Graph *graph) {
    for (int i = 0; i < graph->N; i++) {
        free(graph->G[i]);
    }
    free(graph->node2color);
    free(graph->visited);
    free(graph->queue);
    free(graph->E);
}
void bfs(Graph *graph, int v) {
    int front = 0, rear = 0;
    graph->queue[rear++] = v;
    graph->visited[v] = 1;
    while (front != rear) {
        int q = graph->queue[front++];
        int color = 0;
        for (int nex : graph->G[q]) {
            if (graph->visited[nex]) {
                continue;
            }
            graph->visited[nex] = 1;
            color++;
            if (color == graph->node2color[q]) {