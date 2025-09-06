import java.util.*;
public class CFlistinterface {


    //ArrayList:-
    static void arraylistexample(){
        ArrayList<Integer> l = new ArrayList<>();
        l.add(1);
        l.add(2);
        l.add(3);
        System.out.println(l);
        System.out.println(l.get(1));
    
        l.set(1, 10);
        System.out.println(l);
        System.out.println(l.contains(10));
      
      }
    

      //Linked list :-
      static void linkedlistexample(){
        LinkedList<Integer> ll = new LinkedList<>();
        ll.add(1);
        ll.add(2);
        ll.add(3);
        System.out.println(ll);
        System.out.println(ll.get(1));
    
        ll.set(1, 10);
        System.out.println(ll);
        System.out.println(ll.contains(10));
      
      }

      //Stack :-
      static void stackexample(){
        Stack<Integer> s = new Stack<>();
        s.push(1);
        s.add(2);
        s.add(3);
        System.out.println(s);
        System.out.println(s.get(1));
    
        s.set(1, 10);
        System.out.println(s);
        System.out.println(s.contains(10));
        System.out.println(s.empty());
        System.out.println(s.peek());
        System.out.println(s.pop());
        System.out.println(s.size());
      
      }
    
    
    
    
     public static void main(String[] args) {
        System.out.println("Arraylist :-");
        arraylistexample();
        System.out.println("Linkedlist :-");
        linkedlistexample();
        System.out.println("Stack :-");
        stackexample();   
    }
    
    


    
}
