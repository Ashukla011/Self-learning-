class StringInJava{
    public static void main(String[],args){
        String name = "Farhan Hasim Chowdhary";
        String literalString ="abc";
        String literalString2 ="abc";

        String objectString = new String("xyz");
        String objectString2 = new String("xyz");

        System.out.println(literalString == literalString2)
        System.out.println(objectString == objectString2)
        // String name = new String('Farhan Hasim Chowdhary')// litterl way : check by jvm it is exit in string pool
        System.out.println(name);




    }
}