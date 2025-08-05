public class ASciiValue {
    public static void main(String[] args){
        String ch = "avnishshukla";
       
        for(int i = 0; i<ch.length(); i++){
              char  charecter  = ch.charAt(i);
              int asciivalue =  charecter;
              
            System.out.println(asciivalue);
        }
    }
}
