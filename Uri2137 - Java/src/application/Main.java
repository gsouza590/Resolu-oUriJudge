package application;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n=0;
		String linha="";
		
		while ((linha = br.readLine()) != null ) {
		    List<String> cod = new ArrayList<>();
		    
    		n = Integer.parseInt(linha);
    
    		for (int i = 0; i < n; i++) {
    			linha = br.readLine();
    			cod.add(linha);
    		}
		
    		Collections.sort(cod);
    
    		for(String it: cod) {
    			System.out.println(it);
    		}
		}
	}
}