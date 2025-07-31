public class Pattern {

    public static void main(String[] args) {
        int n = 6;

        // Upper Part
        for (int i = n / 2; i <= n; i += 2) {
            // Print spaces
            for (int j = 1; j < n - i; j += 2) {
                System.out.print(" ");
            }
            // Print first star
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            // Print spaces in the middle
            for (int j = 1; j < n - i; j++) {
                System.out.print(" ");
            }
            // Print second star
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // Lower Part
        for (int i = n; i >= 1; i--) {
            // Print spaces
            for (int j = i; j < n; j++) {
                System.out.print(" ");
            }
            // Print stars
            for (int j = 1; j <= (i * 2) - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
