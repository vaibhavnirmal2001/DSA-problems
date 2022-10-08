import java.util.*;
public class dfs {
    static int v;
    static int[][] m;
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. of Vertices:");
        v=sc.nextInt();
        //e=sc.nextInt();
        m=new int[v+1][v+1];
        //int[][] m=new int[v+1][v+1];
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                m[i][j]=0;
            }
        }
        addEdge(0,1);
        addEdge(0,2);
        addEdge(1,3);
        addEdge(2,3);
        addEdge(2,4);

        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                System.out.print(m[i][j]+" ");
            }
            System.out.println();
        }
        bfsF();

    }
    static void addEdge(int source, int destination)
    {
        m[source][destination]=1;
        m[destination][source]=1;
    }
    static void removeEdge(int source, int destination)
    {if(containsEdge(source, destination)==true)
        {
        m[source][destination]=0;
        m[destination][source]=0;
        }
    }
    static boolean containsEdge(int source, int destination)
    {
        return m[source][destination]==1; 
    }
    
    static void dsfHelper(int sv,int[] visited)
    {
        System.out.println(sv);//sv=startingVertex
        visited[sv]=1;
        for(int i=1;i<v;i++) //beginning from 1 since 0 has been already explored as default case
        {if(m[sv][i]==1 && visited[i]==0)
            {
                dsfHelper(i, visited);
            }
        }
    }
    static void dfsF()
    {
       int visited[]=new int[v+1];
       for(int i=0;i<v;i++)
        {visited[i]=0;  //since initially no vertex is visited
        }
        dsfHelper(0,visited);
    }
    static void bfsF()
    {
        int visited[]=new int[v+1];
        for(int i=0;i<v;i++)
        {visited[i]=0;  //since initially no vertex is visited
        }
        Queue<Integer> q = new PriorityQueue<>();
        q.add(0);
        visited[0]=1;
        
        
        while(!q.isEmpty())
        {
            int u=q.poll();
            System.out.println(u);
            for(int i=1;i<v;i++) //beginning from 1 since 0 has been already explored as default case
            {if(m[u][i]==1 && visited[i]==0)
                {
                    q.add(i);
                    visited[i]=1;
                }
            }

        }
    }
}
