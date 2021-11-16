/*   	           Team Details
 Member1 : Name : Mohan Dandigam and  Netid: nj6956
 Member2 : Name : G.NIKHIL CHANDRA REDDY  and Netid: AF3138
*/

import java.io.*;
import java.util.*;

public class BSTORNOT
{
    private int V; 
    private LinkedList<Integer> adjcent[];

    @SuppressWarnings("unchecked") BSTORNOT(int v)
    {
            V = v;
            adjcent = new LinkedList[v];
            for (int i = 0; i < v; ++i)
                    adjcent[i] = new LinkedList();
    }
    
    void addEdge(int v, int w)
    {
            adjcent[v].add(w); 
    }
    
    boolean BSTRecursive(int n, int min, int max, boolean visited[]) 
    {
        visited[n] = true;
        if(n < min || n > max) 
        {
            return false;
        }
        else
        {
            Iterator<Integer> i = adjcent[n].listIterator();
            
            boolean isLeftValid = true;
            boolean isRightValid = true;
            int left = -1;
            int right = -1;
            
            while (i.hasNext())
            {
                int curr = i.next();
                if(!visited[curr]){
                    if(left == -1){
                        left = curr;
                    } else if(right == -1){
                        right = curr;
                    }
                }
            }
            
            if(left != -1 && !visited[left]){
                isLeftValid = BSTRecursive(left, min, n-1, visited);
            }
            
            if(right != -1 && !visited[right]){
                isRightValid = BSTRecursive(right, n+1, max, visited);
            }
            
            return isLeftValid && isRightValid;
        }
    }
    
    boolean BST(int n)
    {
        boolean visited[] = new boolean[V];
        return BSTRecursive(n, Integer.MIN_VALUE, Integer.MAX_VALUE, visited);
    }
    
    public static void main(String args[]) throws Exception
    {
        Boolean sign=false;
        int num1=0;
        int num2=0;
        BufferedReader br = new BufferedReader(new FileReader("input.txt"));
        BSTORNOT g = new BSTORNOT(100);
        String line;
        Boolean tar=false;
        int target=0;
        int cnt=0;
        int root=0;
        while ((line = br.readLine()) != null) 
        {
            
            if(line.equals("*"))
            {
                tar=true;
                num1=0;
                num2=0;
                sign=false;
                continue;
            }
            else if(line.equals("#"))
            break;
            int sz= line.length();
            for(int iti=0;iti<sz;++iti)
            {
                char i= line.charAt(iti);
                if(i==',')
                sign=true;
                else if(sign)
                num2= num2*10 + (i-'0');
                else
                num1= num1*10 + (i-'0');
            }
            if(cnt==0)
            root=num1;
            ++cnt;
            if(tar)
            target=num1;
            g.addEdge(num1, num2);
            g.addEdge(num2, num1);
            num1=0;
            num2=0;
            sign=false;
        }
        br.close();
        
        boolean flg= g.BST(root);
        if(flg)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}