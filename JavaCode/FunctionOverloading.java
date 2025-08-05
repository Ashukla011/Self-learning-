public class FunctionOverloading {
    static int plusMethodInt(int x, int y){
        return x+y;
    }

    static double plusMethoddouble(double x, double y){
        return x + y;
    }

    public static void main(String[] args){
        int myNum1 = plusMethodInt(8,9);
        double myNum2 = plusMethoddouble(8,7);
        System.out.println(myNum1);
        System.out.println(myNum2);
    }
}
