import java.util.Scanner;

class PP
{
    String name;
    int t;

    PP(String name, int t)
    {
        this.name = name;
        this.t = t;
    }
}

class Queue
{
    PP[] Q = new PP[100005];
    int head, tail, n;

    void enqueue(PP x)
    {
        Q[tail] = x;
        tail = (tail + 1) % 100005;
    }

    PP dequeue()
    {
        PP x = Q[head];
        head = (head + 1) % 100005;
        return x;
    }

    int min(int a, int b)
    {
        return a < b ? a : b;
    }
}

public class s644382798 {
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Queue q = new Queue();
        int elaps = 0, c;
        int i, qq;
        PP u;
        q.n = sc.nextInt();
        qq = sc.nextInt();

        for (i = 1; i <= q.n; i++)
        {
            q.Q[i] = new PP(sc.next(), sc.nextInt());
        }
        q.head = 1;
        q.tail = q.n + 1;

        while (q.head != q.tail)
        {
            u = q.dequeue();
            c = q.min(qq, u.t);
            u.t -= c;
            elaps += c;
            if (u.t > 0)
                q.enqueue(u);
            else
                System.out.println(u.name + " " + elaps);
        }
    }
}