class Hello {
    // static int age;: print 0
    static int age =25
    public static void main(String[] args){
        System.out.println("Hello world");
         int age;
        
         System.out.println("I am " + age + " years old.");
    

    // integer types:
    byte aSingleByte = 100 ; // -128 to 127
    short aSmallNumber = 20000 ; // -32,768 to 32,767
    int anInterger = 2147483647; // -2147482648 to 2147482648
    long aLargeNumber = 9223372036854775807L ; // -9223372036854775808 to 9223372036854775807

    // decimal types
    double aDouble = 1.79769313; // 4.9E-324 to 1.797693134863157E308
    float aFloat = 3.4028F; // 1.4E-45 to 3.4028235E38

    // booleans
    boolean isWeekend = false;
    boolean isWorkday = true;

    // characters 
    char copyrightSymbol ='\u00A9'; // it will print symbol instate of vlaue
    char percentSymble = "%" // print %

    // int number1 =5;
    // double number2 =mumber1;
    // System.out.println(number2); // print 5.0 
    // double to int is not possible 
    // for reverse 

    double num1 = 5.8;
    int num2 = (int)num1;
    System.out.println(num2);// print onley 5 not print 5.8

      
    // arthmetic operation in java
     
    int number1 =12;
    int number2 =6;
    System.out.println(number+number2);
    System.out.println(number-number2);
    System.out.println(number*number2);
    // DIVISION
    System.out.println(number/number2); // 2
    System.out.println(number1%number2) // 0 reminder

    }
}



