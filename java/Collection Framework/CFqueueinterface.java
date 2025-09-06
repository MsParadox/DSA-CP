import java.util.*;

public class CFqueueinterface {
   
//Linked List :-
   static void QueueExamples(){
    LinkedList<Integer> q = new LinkedList<>();
    q.offer(1);
    q.offer(2);
    q.offer(3);
    System.out.println(q.peek());
    System.out.println(q.poll());
    System.out.println(q.peek());
    System.out.println(q.isEmpty());
    System.out.println(q.size());
   }

//Priority Queue:-
    static void PriorityqueueExamples(){
     PriorityQueue<Integer> pq = new PriorityQueue<>(); // by default minimum value is priorities
     pq.add(10);
     pq.add(5);
     pq.add(7);
     System.out.println(pq.peek());
     System.out.println(pq);
     System.out.println(pq.poll());
     System.out.println(pq);
     System.out.println(pq.peek());
    
     //for max priorties :-
     //PriorityQueue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());
    }
//Deque :-
    static void DequeExamples(){
        Deque<Integer> dq = new ArrayDeque<>();//Deque or ArrayDeque
        dq.addFirst(1);
        dq.addFirst(2);
        dq.addLast(3);
        dq.addLast(4);
        System.out.println(dq);
        System.out.println(dq.pollFirst());
        System.out.println(dq.pollLast());
        System.out.println(dq);

    }   
   
   
   
    public static void main(String[] args) {
        System.out.println("QueueByLL :-");
        QueueExamples();
        System.out.println("Priority que :-");
        PriorityqueueExamples();
        System.out.println("Deque :-");
        DequeExamples();
    }
}
