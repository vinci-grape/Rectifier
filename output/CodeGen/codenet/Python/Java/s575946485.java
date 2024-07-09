a = new int[]{1, 2, 3, 4, 5};

dic = new HashMap<Integer, Integer>();

for (int i = 0; i < a.length; i++) {
    if (a[i] % 10 == 0) {
        dic.put(i, 0);
    } else {
        dic.put(i, a[i] % 10);
    }
}

int min_num = 0;
int a_sum = 0;
for (int i = 0; i < dic.size(); i++) {
    if (dic.get(i) == min(dic.values())) {
        min_num = i;
    }
}

a_sum = a[0] + a[1] + a[2] + a[3] + a[4];
dic.remove(min_num);

int sum = 0;
for (int i = 0; i < dic.size(); i++) {
    sum += dic.get(i);
}

System.out.println(Math.abs(sum + a_sum));