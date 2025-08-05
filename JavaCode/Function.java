public class Function{
    public static void PrintName() {
        System.out.println("Avnish");
       
    }

    public static int addNumbers(int a, int b){
        return a+b;
    }
    public static void main(String[] args){
         PrintName();
         int somofvalue = addNumbers(10,90);
         System.out.println(somofvalue);
    }
}

