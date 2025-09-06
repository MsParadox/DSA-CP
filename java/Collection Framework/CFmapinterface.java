import java.util.*;
public class CFmapinterface {

//HashMap :-
static void HashMapExamples(){
Map<Integer,String> mp = new HashMap<>();
mp.put(3,"mohit");
mp.put(2,"rohit");
mp.put(1, "ruchi");
System.out.println(mp);
System.out.println(mp.get(1));
System.out.println(mp.containsKey(4));
System.out.println(mp.containsValue("mohit"));
mp.put(4,"mummy");
System.out.println(mp);
mp.put(1,"papa" );
System.out.println(mp);
mp.putIfAbsent(1, "jija");
System.out.println(mp);
System.out.println(mp.entrySet());
System.out.println(mp.keySet());
System.out.println(mp.values());

//iterating over keys in map
for(Integer i:mp.keySet()){
    System.out.println(i);
}
//iterating over values in map
for(String i:mp.values()){
    System.out.println(i);
}
//iterating over key-value pairs in map
for(var i:mp.entrySet()){
    System.out.println(i);
}
for(var i:mp.entrySet()){
    System.out.println(i.getKey());
}
for(var i:mp.entrySet()){
    System.out.println(i.getValue());
}

}


//LinkedHashMap :-
static void LinkedHashMapExamples(){
Map<Integer,String> mp = new LinkedHashMap<>();
mp.put(3,"mohit");
mp.put(2,"rohit");
mp.put(1, "ruchi");
System.out.println(mp);
}

//TreeMap :-
static void TreeMapExamples(){
    TreeMap<Integer,String> mp = new TreeMap<>();
    mp.put(3,"mohit");
    mp.put(2,"rohit");
    mp.put(1, "ruchi");
    System.out.println(mp);    
}

    
    public static void main(String[] args) {
      System.out.println("Hash Map:-");
        HashMapExamples();
        System.out.println("Linked Hashmap :-");
        LinkedHashMapExamples();
        System.out.println("TreeMap :-");
        TreeMapExamples();

    }
}
