package ArrayInArrayExample;

public class ArrayInArrayExample {
    public static void main(String[] args) {
        int[][] mathScores = new int[2][3];
        for(int i = 0; i < mathScores.length; i++) { //2
            for(int j = 0; j < mathScores[i].length; j++) { //각각의 길이 //자바는 길이 다를 수 있다 //일차원 배열이 이어져있는 형태
                System.out.println("mathScores[" + i + "][" + j + "] = " + mathScores[i][j]);
            }
        }
        System.out.println();
        
        int[][] englishScores = new int[2][];
        englishScores[0] = new int[2]; //1차원 배열 할당
        englishScores[1] = new int[3];
        for(int i = 0; i < englishScores.length; i++) { //2
            for(int j = 0; j < englishScores[i].length; j++) { //각각의 길이 //자바는 길이 다를 수 있다 //일차원 배열이 이어져있는 형태
                System.out.println("englishScores[" + i + "][" + j + "] = " + englishScores[i][j]);
            }
        }
        System.out.println();

        int[][] javaScores = { {95, 80}, {92, 96, 80} };
        for(int i = 0; i < javaScores.length; i++) { //2
            for(int j = 0; j < javaScores[i].length; j++) { //각각의 길이 //자바는 길이 다를 수 있다 //일차원 배열이 이어져있는 형태
                System.out.println("javaScores[" + i + "][" + j + "] = " + javaScores[i][j]);
            }
        }
    }
}
