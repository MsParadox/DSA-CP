import java.util.*;
public class CFsetinterface {
    

//HashSet :- O(1)
//unordered and unique & hashing internally
static void HashSetExamples(){
 HashSet<Integer> st = new HashSet<>();
 st.add(1);
 st.add(2);
 st.add(3);
 System.out.println(st);
 st.add(1);
 st.add(2);
 System.out.println(st);
 st.remove(2);
 System.out.println(st.contains(2));
 System.out.println(st.size());
 st.add(48);
 st.add(15);
 st.add(10);
 
 System.out.println(st);
}
    
    
//Linked HashSet :-
//putting (insertion) order matters and unique &Linkedlist + hashtable
static void LinkedHashSetExamples(){
    LinkedHashSet<Integer> lst = new LinkedHashSet<>();
    lst.add(1);
    lst.add(2);
    lst.add(3);
    System.out.println(lst);
    lst.add(1);
    lst.add(2);
    System.out.println(lst);
    lst.remove(2);
    System.out.println(lst.contains(2));
    System.out.println(lst.size());
    lst.add(48);
    lst.add(15);
    lst.add(10);
    System.out.println(lst);  
}    
    
//Tree Set :-O(logN)
//Sorted and unique & self balancig tree (red blood)
static void TreeSetExamples(){
    TreeSet<Integer> tst = new TreeSet<>();
 tst.add(1);
 tst.add(2);
 tst.add(3);
 System.out.println(tst);
 tst.add(1);
 tst.add(2);
 System.out.println(tst);
 tst.remove(2);
 System.out.println(tst.contains(2));
 System.out.println(tst.size());
 tst.add(48);
 tst.add(15);
 tst.add(10);
 System.out.println(tst);
    
}    
    

    public static void main(String[] args) {
        System.out.println("HashSet :-");
        HashSetExamples();
        System.out.println("LinkedHashset :-");
        LinkedHashSetExamples();
        System.out.println("TreeSet :-");
        TreeSetExamples();        
    }
}
