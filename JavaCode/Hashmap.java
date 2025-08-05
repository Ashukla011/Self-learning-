import java.util.*;
public class Hashmap{

    public static void main(String args[]){

    HashMap<String, Integer> map = new HashMap<>();
        
    map.put("india",120);
    map.put("US",30);
    map.put("China",150);

    System.out.println(map);
    // put: if key exit then uptade it else it will insert new key and value
    map.put("China", 180);
    
    // Search Operation : 
    if(map.containsKey("China")){
    System.out.println("Key is present in the map");
    
    }else{
        System.out.println("Key is not present in the map");
    }
    
    // Iteration in hash map 
    // for (value:collection)
     
    for(Map.Entry<String, Integer> e: map.entrySet()){
        System.out.println(e.getKey());
        System.out.println(e.getValue());
    }
    Set<String> keys = map.keySet();
    for(String key : keys){
     System.out.println(key + "-" + map.get(key));
    }
    map.remove("China");
    System.out.println(map);
    
    }
}