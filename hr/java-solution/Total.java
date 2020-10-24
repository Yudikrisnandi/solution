import java.util.Scanner;

public class Total {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int a;
    a = sc.nextInt();
    String s;
    s = sc.nextLine();
    String[] str = s.split(" ");
    int total = 0;
    for(int i = 0; i < a; i++){
      int x = Integer.parseInt(str[i]);
      total += x;
    }
    System.out.println(total);
  }
}

