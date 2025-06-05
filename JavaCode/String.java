class StringInJava{
    public static void main(String[] args){
        String name = "Farhan Hasim Chowdhary";
        System.out.println("name:"+ name);

          // COMPAIRING STRING VLAUE 
           String string1 = new String("abc");
           String string2 = new String ("abc");
           String string3 = new String("ABC");
           String string4 = "The sky is blue";
        
           System.out.println(string1.equals(string2)); // true
           System.out.println(string1.equals(string3));// false
           System.out.println(string1.equalsIgnoreCase("new string4:"+ string3));// true

           System.out.println(string4.replace("blue","red"));// The sky is red
           System.out.println(string4); // but the original string does not change : The sky is blue
           System.out.println(string4.contains("sky")); // True
           
        // 1. Immutability 
         
        /*Strings in Java are immutable, meaning once a String object is 
        created, its value cannot be changed. Any operation that seems to
        modify a string actually creates a new String object.*/

        String str = "Hello";
        str.concat(" World"); // Creates a new String object, "Hello World"
        System.out.println(str); // Output: "Hello"

        // 2. STORE STRING POOL 
        /*Strings are stored in a special memory area called the 
        String Pool. If two string literals have the same value,
        they share the same memory reference to save space*/
        String str1 = "Java";
        String str2 = "Java";
        System.out.println(str1 == str2); // Output: true (same reference)

       // 3. INTERNING 
       /*The intern() method ensures that strings with the same content 
        share share the same memory reference in the string pooll
          */
        String s1 = new String ("Hello");
        String s2 = s1.intern();
        String s3 = "Hello";
        System.out.println(s2 == s3); // true 

        // 4. Unicode support
        /*  String in java are based on Unicode, allowing them to represent 
            charecters virtuallly all languages and symbols.*/

        // 5. Zero-based Indexing 
        /*String are index starting form 0 */
        String Str = "java";
        System.out.println(str.charAt(1)); // a
        
        // Length is Fixed 
           System.out.println(Str.length());// 4

          

    }
}