

public class SinglyLinkedList {
    
    private ListNode head; // head of the list
    
    // Define a nested class to represent each node of the singly linked list
    private static class ListNode {
        int data;
        ListNode next;
        
        ListNode(int data) {
            this.data = data;
            this.next = null;
        }
    }
    
    public SinglyLinkedList() {
        head = null;
    }
    
    // Function to add a new node at the front of the list
    public void addFirst(int data) {
        ListNode newNode = new ListNode(data);
        newNode.next = head;
        head = newNode;
    }
    
    // Function to add a new node at the end of the list
    public void addLast(int data) {
        ListNode newNode = new ListNode(data);
        if (head == null) {
            head = newNode;
            return;
        }
        ListNode current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }
    
    // Function to delete the first node of the list
    public void deleteFirst() {
        if (head == null) {
            return;
        }
        head = head.next;
    }
    
    // Function to delete the last node of the list
    public void deleteLast() {
        if (head == null) {
            return;
        }
        if (head.next == null) {
            head = null;
            return;
        }
        ListNode current = head;
        while (current.next.next != null) {
            current = current.next;
        }
        current.next = null;
    }
    
    // Function to print the linked list
    public void printList() {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        SinglyLinkedList myList = new SinglyLinkedList();
        
        myList.addFirst(2);
        myList.addFirst(3);
        myList.addLast(4);
        myList.addLast(5);
        myList.printList(); // Output: 3 2 4 5
        
        myList.deleteFirst();
        myList.deleteLast();
        myList.printList(); // Output: 2 4
    }
}
