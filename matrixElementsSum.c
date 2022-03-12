int solution(int[][] matrix) {
    // returns the length of the rows in the array
    int lenRow = matrix.length;
    // returns the length of the columns in the array
    int lenCol = matrix[0].length;
    int sum=0;
    for (int col=0;col<lenCol;col++){
        for (int row=0;row<lenRow;row++){
            if(matrix[row][col]>0){
               sum+=matrix[row][col];
            }  
            else{  
                row=lenRow;
            }            
        }
    }
    return sum;
}
