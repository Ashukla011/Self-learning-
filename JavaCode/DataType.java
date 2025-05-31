public class DataType {
    public static void main(String[] args) {
        // Primitive type of data type
        // integer types:
        byte aSingleByte = 100; // -128 to 127
        short aSmallNumber = 20000; // -32,768 to 32,767
        int anInterger = 2147483647; // -2147482648 to 2147482648
        long aLargeNumber = 9223372036854775807L; // -9223372036854775808 to 9223372036854775807

        // decimal types
        double aDouble = 1.79769313; // 4.9E-324 to 1.797693134863157E308
        float aFloat = 3.4028F; // 1.4E-45 to 3.4028235E38

        // booleans
        boolean isWeekend = false;
        boolean isWorkday = true;

        // characters
        char copyrightSymbol = '\u00A9'; // it will print symbol instate of vlaue
        // char percentSymble = "%"; // print %

        int NUM1 = 5;
        double NUM2 = NUM1;
        System.out.println(NUM2); // print 5.0 (conversion of int into double)
        // double to int is not possible
        // for reverse

        // how to convert double into int?
        double num1 = 5.8;
        int num2 = (int) num1;
        System.out.println(num2);// print onley 5 not print 5.8

        // arthmetic operation in java

        int number1 = 12;
        int number2 = 5;
        double NUMBER1 = 12;
        double NUMBER2 = 5;

        // number1+number+5 = number+=5

        System.out.println(number1 + number2);
        System.out.println(number1 - number2);
        System.out.println(number1 * number2);
        // DIVISION
        // 1. if you divide a integer with an interger result will be interger
        // 2. if you devide a double with an double result will be double
        // 3. double devide by interger then result is double

        System.out.println(number1 / number2); // 2
        System.out.println(NUMBER1 / NUMBER2); // 2.4
        System.out.println(NUMBER1 / number2); // 2.4

        // REMINDER

        System.out.println(number1 % number2); // 0 reminder

        // Relational Operator

        // is equal to
        System.out.println(number1 == number2);

        // is not equal to
        System.out.println(number1 != number2);

        // is greater than
        System.out.println(number1 > number2);

        // is less than
        System.out.println(number1 < number2);

        // is greater than equal
        System.out.println(number1 >= number2);

        // is less than equal
        System.out.println(number1 <= number2);

        int age = 45;
        boolean isStudent = false;
        boolean isLibraryMember = false;
        System.out.println(age >= 18 && age <= 48);
        System.out.println(isStudent || isLibraryMember);
        System.out.println(!isStudent);// reverse the value it will print True

        // Unary Operator 
        int score = 0 ;
        int turns = 10;

        // score += 1 ;
        // turns--    ;

        // System.out.println(score);
        // System.out.println(turns);
        System.out.println(score++) ;// 0
        System.out.println(score); // 1

    }
}
