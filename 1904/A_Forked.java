/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

/*
Template taken from:
https://gist.github.com/raviagarwal7/e85898a2f9876581f154ee4aa0f98935
*/

import java.io.*;
import java.util.*;
import javafx.util.Pair;

public class Main
{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer tokenizer=null;
	
	public static void main(String[] args) throws IOException
	{
		new Main().execute();
	}
	
	void debug(Object...os)
	{
		System.out.println(Arrays.deepToString(os));
	}
	
	int ni() throws IOException
	{
		return Integer.parseInt(ns());
	}
	
	long nl() throws IOException 
	{
		return Long.parseLong(ns());
	}
	
	double nd() throws IOException 
	{
		return Double.parseDouble(ns());
	}
		
	String ns() throws IOException 
	{
		while (tokenizer == null || !tokenizer.hasMoreTokens()) 
			tokenizer = new StringTokenizer(br.readLine());
		return tokenizer.nextToken();
	}
	
	String nline() throws IOException
	{
		tokenizer=null;
		return br.readLine();
	}
	

	//Main Code starts Here
	int totalCases, testnum;	
	int a, b;
	int xk, xq, yk, yq;
	int dxA[] = {-1, 1, -1, 1};
	int dxB[] = {-1, -1, 1, 1};

	void execute() throws IOException
	{
		totalCases = ni();
		for(testnum = 1; testnum <= totalCases; testnum++)
		{
			if(!input())
				break;
			solve();
		}
	}

	void solve() throws IOException
	{
	    Set<Pair<Integer, Integer>> st1 = new HashSet<>();
	    Set<Pair<Integer, Integer>> st2 = new HashSet<>();
	    
	    for(int i=0; i<4; i++) {
	        st1.add( new Pair<>(xk+dxA[i]*a, yk + dxB[i]*b) );
	        st1.add( new Pair<>(xk+dxA[i]*b, yk + dxB[i]*a) );
	        st2.add( new Pair<>(xq+dxA[i]*a, yq + dxB[i]*b) );
	        st2.add( new Pair<>(xq+dxA[i]*b, yq + dxB[i]*a) );
	    }
	    int ans = 0;
	    for(Pair<Integer, Integer> mv:st1) {
	        if(st2.contains(mv))
	            ans++;
	    }
	    System.out.println(ans);
	    return ;
	}

	boolean input() throws IOException
	{
	    a = ni();
	    b = ni();
	    xk = ni();
	    yk = ni();
	    xq = ni();
	    yq = ni();
		return true;
	}
}

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
