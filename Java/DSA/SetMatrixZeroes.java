import java.util.*;

public class SetMatrixZeroes {
    public static void setZeroes(int[][] matrix) {

        int row = matrix.length;
        int col = matrix[0].length;

        int[] rows = new int[row];
        int[] cols = new int[col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for (int i = 0; i < row; i++) {

            if (rows[i] == 1) {

                for (int j = 0; j < col; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 0; j < col; j++) {

            if (cols[j] == 1) {

                for (int i = 0; i < row; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    public static void main(String[] args) {

        int[][] matrix = {
            {1, 1, 1},
            {1, 0, 1},
            {1, 1, 1}
        };

        setZeroes(matrix);

        System.out.println("Matrix after setting zeroes:");

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}