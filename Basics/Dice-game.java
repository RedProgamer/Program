package com.company;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1, s2;

        System.out.print("Enter the name of the player 1 : ");
        s1 = sc.nextLine();

        System.out.print("Enter the name of the player 2 : ");
        s2 = sc.nextLine();

        int max = 6, min = 1;
        int range = max - min + 1;

        int player1 = 0, player2 = 0;

        while(true) {
            int rand1 = (int)(Math.random() * range) + min;
            int rand2 = (int)(Math.random() * range) + min;
            // rand = 1 + Math.random() * 6 [max]

            player1 = player1 + rand1;
            player2 = player2 + rand2;

            //System.out.println("player 1 : " + player1);
            //System.out.println("player 2 : " + player2);

            if(player1 >= 20) {
                System.out.println( s1 + " won the match.");
                break;
            }else if(player2 >= 20) {
                System.out.println(s2 + " won the match.");
                break;
            }
        }

    }
}