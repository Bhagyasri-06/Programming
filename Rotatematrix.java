class Solution {
    public void rotate(int[][] matrix) {
        int W = matrix.length;
        int [][] arr = new int[W][W];
        int G=0;
        for(int j=0;j<W;j++){
            int H=0;
            for(int i = W-1;i>=0;i--){
                arr[G][H]=matrix[i][j];
                H++;
            }
            G++;
        }
        for(int i=0;i<W;i++){
            for(int j=0;j<W;j++){
                matrix[i][j]=arr[i][j];
            }
        }
        
        
    }
}
