import java.io.*;

class HelloWorld {
    void fun(Object... x) {
        System.out.println("dot function ");
        for (Object it : x) {
            System.out.println(it);
        }
    }

    void fun(int x) {
        System.out.println("one argument");
    }

    void fun(int x, int y) {
        System.out.println("two arguments");
    }

    public static void main(String[] args) {
        HelloWorld obj = new HelloWorld();
        obj.fun("maaz", 56, "aryan",98835,55.9);
    }
}
