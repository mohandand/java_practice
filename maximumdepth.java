import java.util.*;
import java.lang.*;
class TreeNode 
{
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) 
      {
          this.val = val;
          this.left = left;
          this.right = right;
      }
}
class MaxDepth
{  
    public static int maxDepth(TreeNode root) 
    {
        if(root==null) return 0;
        
        return 1+Math.max(maxDepth(root.left),maxDepth(root.right));
    }//The because the code visit every node of the tree only one time ,if the tree has n nodes tc is big O(n).
    
    public static void main(String args[])
    {
        TreeNode root= new TreeNode(3);
        root.left= new TreeNode(9);
        root.right= new TreeNode(20);
        root.right.left= new TreeNode(15);
        root.right.right= new TreeNode(7);
       
        System.out.println(maxDepth(root));
        
    }
}