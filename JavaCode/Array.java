
import java.util.ArrayList;
public class Array {
    public static void main(String args[]){
        int [] arr = new int[2];
        arr[0] =1;
        arr[1] =2;
        System.out.println("Arra:"+ arr[1]);
       
        int[] arr2 = {40,55,63,17,22,68,89,97,89};
        int n = arr2.length;
        for(int i =0;i<n;i++){
            ArrayList<Integer> bag = new ArrayList<>();
           for(int j =i ; j<n;j++){
            bag.add(arr2[j]);
           }
           System.out.println(bag);
        }
    }
}
