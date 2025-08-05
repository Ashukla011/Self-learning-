// The Way The Java Work

/*
 Write onece and run anywhare

 source -> compiler-> output-> virtual Machines 
 javacode -> the compiler - generate | -> compile code:party.class-> Run the program by stating java virtual machine (JVM) with the party.class file, the jvm translate the bytecode into something the underlyig plateform usnderstan the run you pogram 
            party.class file is made up| 
            of bytecodes|
*/

public class Intro {
// In older versions of Java (prior to JDK 7), it was possible to place executable code within a static block. static blocks are executed when the class is loaded by the JVM, even before the main method (if present) is invoked. By including System.exit(0); within the static block, the program could terminate before the JVM attempted to find and execute a main method, effectively running code without a main method being called. This approach is not supported in modern Java versions (JDK 7 and later).
     public static void main (){
        System.out.println("hello");
     }
}