// problem link
// https://codeforces.com/problemset/problem/1833/A


import java.util.*;


public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        while(t-- > 0){
            int n = sc.nextInt();
            sc.nextLine();
            String txt = sc.nextLine();
            Set<String> st = new HashSet<>();
            for(int i = 0;i  < n-1;i++){
                String str = "";
                str += txt.charAt(i);
                str += txt.charAt(i+1);
                st.add(str);
            }
            
            System.out.println(st.size());
        }
    }
}