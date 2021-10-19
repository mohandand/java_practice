/*   	           Team Details
 Member1 : Name : Mohan Dandigam and  Netid: nj6956
 Member2 : Name : G.NIKHIL CHANDRA REDDY  and Netid: AF3138
*/

import java.io.*;
import java.util.*;

public class DFSBFS 
{
        private int V; 
    private LinkedList<Integer> adjcent[];

        
        @SuppressWarnings("unchecked") DFSBFS(int v)
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
        boolean DFSRecursive(int v, boolean visited[], int target)
        {
            visited[v] = true;
            if(v==target)
            {
                return true;
            }
                Iterator<Integer> i = adjcent[v].listIterator();
                while (i.hasNext())
                {
                        int n = i.next();
                        if (!visited[n])
                                {
                                    boolean DFSstatus= DFSRecursive(n, visited,target);
                                    if(DFSstatus)
                                    return true;
                                }
                }
                return false;
        }

        boolean DFS(int v, int target)
        {
                boolean visited[] = new boolean[V];
                return DFSRecursive(v, visited, target);
        }

        boolean BFS(int s, int target)
    {
        if(s==target)
        return true;
        boolean visited[] = new boolean[V];
        LinkedList<Integer> queue = new LinkedList<Integer>();
        visited[s]=true;
        queue.add(s);
        while (queue.size() != 0)
        {
            s = queue.poll();
            Iterator<Integer> i = adjcent[s].listIterator();
            while (i.hasNext())
            {
                int n = i.next();
                if(n==target)
                return true;
                if (!visited[n])
                {
                    visited[n] = true;
                    queue.add(n);
                }
            }
        }
        return false;
    }
        public static void main(String args[]) throws Exception
        {
        Boolean sign=false;
        int num1=0;
        int num2=0;
        BufferedReader br = new BufferedReader(new FileReader("input.txt"));
        DFSBFS g = new DFSBFS(100);
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
        
                boolean DFSstatus= g.DFS(root,target);
                if(DFSstatus)
                System.out.println("DFS: Success");
                else
                System.out.println("DFS: Failure");
                boolean BFSStatus= g.BFS(root,target);
                if(BFSStatus)
                System.out.println("BFS: Success");
                else
                System.out.println("BFS: Failure");
        }
}