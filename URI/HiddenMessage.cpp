import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main{
 
    public static void main(String[] args) throws IOException{
 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
 
        int n = Integer.parseInt(br.readLine());
 
        for(int i = 0; i < n; i++){
 
            String line = br.readLine();
            boolean space = true;
 
            for(int j = 0; j < line.length(); j++){
 
                char c = line.charAt(j);
 
                if(c == ' '){
                    space = true;
                }else{
                    if(space){
                        sb.append(c);
                    }
                    space = false;
                }
 
            }
 
            sb.append("\n");
 
        }
 
        System.out.print(sb);
 
    }
 
}
