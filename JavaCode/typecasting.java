public class typecasting {
    public static void main(String[] args) {
        // Type casting is when you asssign a value of one
        // primitive daa type to another type

        /* WIDENING CASTING(AUTOMATICALLY) - CONVERTING A smaller type to alerger */
        // byte -> short -> char -> int -> long -> float -> double
        // double -> float -> long -> int -> char -> short -> byte

        // EXAMPLE : Widenign casting :=> Int into double ;
        /*
         * Widening casting is done automatically when passing a smaller size type to a
         * larger size type
         */
        int myInt = 9;
        double myDouble = myInt;
        // Automatic casting : int to double
        System.out.println(myInt);
        System.out.println(myDouble);

        // Narrowing Casting : => Narrowing casting must be done manually by placing the typein parentheses() in front of the value;
         double myDouble1 = 9.78d;
         int myInt1 = (int) myDouble;
        //  Explicit casting: double to int
        
        System.out.println(myDouble1);
        System.out.println(myInt1);

        // REAL LIFE EXAMPLE

        // set the max score
           int maxScore = 400;
           int userScore = 434;

        float percentage = (float) userScore/maxScore*100.0f;
        System.out.println(percentage);
    }
}