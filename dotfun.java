import java.io.*;

class HelloWorld {
    void fun(Object... x) {
        System.out.println("dot function ");
        int inttcount=0,scount=0,flocnt=0;
        for (Object it : x) 
        {
            if (it instanceof String) 
            {
                System.out.println("The variable is a String");
                scount++;
            } 
            else if (it instanceof Integer) 
            {
                 System.out.println("The variable is an Integer");
                 inttcount++;
            } 
            else if (it instanceof Double) 
            {
                 System.out.println("The variable is a Double");
                 flocnt++;
            } 
            else 
            {
                 System.out.println("The variable is of some other type");
            }
        
        }
         System.out.println(" integer->" + inttcount + " string->"+scount + " double->" + flocnt);
        
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
