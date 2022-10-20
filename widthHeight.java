import java.util.*;

public class widthHeight {

    static Node root;



    class Node {

        int data;

        Node left, right;



        Node(int data) {

            this.data = data;

            left = right = null;

        }

    }



    void add(int data) {

        root = insert(root, data);

    }



    Node insert(Node root, int data) {

        if (root == null) {

            root = new Node(data);

            return root;

        }

        if (data < root.data) {

            root.left = insert(root.left, data);

        } else if (data > root.data) {

            root.right = insert(root.right, data);

        }

        return root;

    }



    public int treeHeight(Node root) {

        if (root == null) {

            return -1;

        } else {

            return 1 + Math.max(treeHeight(root.left), treeHeight(root.right));

        }

    }



    public static void main(String[] args) {

        widthHeight tree = new widthHeight();

        tree.add(50);

        tree.add(30);

        tree.add(10);

        tree.add(5);

        tree.add(40);

        tree.add(80);

        tree.add(70);

        tree.add(150);

        int h = tree.treeHeight(root);

        System.out.println("Height of tree is: " + h);

    }

}
