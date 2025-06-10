import java.util.Scanner;

public class TakingInputUser {
    public static void main(String [] args){
      
        Scanner scanner = new Scanner (System.in);
        System.out.print("What is you name?");
        String name = scanner.nextLine();

        System.out.println(name);
        scanner.close();

    }
}
