import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;

import static java.util.stream.IntStream.*;
import static java.util.stream.IntStream.of;
import static java.util.stream.LongStream.*;
import static java.util.stream.LongStream.of;

public class Test {

    public static void main(String[] args) throws Exception {
        System.out.println(Test.class.getSimpleName());
    }

    public static class Test implements Runnable {

        private final int count;

        public Test(int count) {
            this.count = count;
        }

        @Override
        public void run() {
            System.out.println(count);
        }
    }

    public static class Test implements Runnable {

        private final int count;

        public Test(int count) {
            this.count = count;
        }

        @Override
        public void run() {
            System.out.println(count);
        }
    }

    public static class Test implements Runnable {

        private final int count;

        public Test(int count) {
            this.count = count;
        }

        @Override
        public void run() {
            System.out.println(count);
        }
    }

    public static class Test implements Runnable {

        private final int count;

        public Test(int count) {
            this.count = count;
        }

        public Test() {
            this.count = count;
        }

        public static void main(String[] args) {
            System.out.println(Test.class.getSimpleName());
        }

        public static void main(String[] args) {
            System.out.println(Test.class.getSimpleName());
        }

        public static class Test {
            public static void main(String[] args) {
            System.out.println(Test.class.getSimpleName());
        }
