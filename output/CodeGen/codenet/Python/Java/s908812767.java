# -*- coding: utf-8 -*-
# https://atcoder.jp/contests/abc126/tasks/abc126_d

import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int n = Integer.parseInt(line);
        Map<Integer, List<Integer>> V = new HashMap<>();
        Map<Integer, Integer> color = new HashMap<>();
        for (int i = 0; i < n; i++) {
            line = br.readLine();
            String[] ss = line.split(" ");
            int u = Integer.parseInt(ss[0]);
            int v = Integer.parseInt(ss[1]);
            int w = Integer.parseInt(ss[2]);
            if (!V.containsKey(u)) {
                V.put(u, new ArrayList<>());
            }
            if (!V.containsKey(v)) {
                V.put(v, new ArrayList<>());
            }
            V.get(u).add(v);
            V.get(v).add(u);
            color.put(u, 0);
            color.put(v, 0);
        }
        for (int i = 0; i < n; i++) {
            line = br.readLine();
            String[] ss = line.split(" ");
            int u = Integer.parseInt(ss[0]);
            int v = Integer.parseInt(ss[1]);
            int w = Integer.parseInt(ss[2]);
            if (color.get(u) == 0) {
                color.put(u, 1);
            } else if (color.get(u) == 1) {
                color.put(u, -1);
            } else if (color.get(u) == -1) {
                color.put(u, 0);
            }
            if (color.get(v) == 0) {
                color.put(v, 1);
            } else if (color.get(v) == 1) {
                color.put(v, -1);
            } else if (color.get(v) == -1) {
                color.put(v, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i, -1);
            } else if (color.get(i) == -1) {
                color.put(i, 0);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color.get(i) == 0) {
                color.put(i, 1);
            } else if (color.get(i) == 1) {
                color.put(i