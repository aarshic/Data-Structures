vector<int> spiralOrder(vector<vector<int> > &A) {
    int rows=A.size();
    if (rows==0) 
	return vector<int> ();
    int cols=A[0].size();
    int row=0,col=0,layer=0;
    vector<int> res;
    res.push_back(A[0][0]);
    int dir=1;
    for (int i=1;i<rows*cols;i++){
        switch(dir){
            case 1:
                if(col==cols-layer-1){
                    row++;
                    dir=2;
                }
                else col++;
                break;
            case 2:
                if(row==rows-layer-1){
                    col--;
                    dir=3;
                }
                else row++;
                break;
            case 3:
                if(col==layer){
                    row--;
                    dir=4;
                }
                else col--;
                break;
            case 4:
                if(row==layer+1){
                    col++;
                    dir=1;
                    layer++;
                }
                else row--;
                break;
        }
        res.push_back(A[row][col]);
    }
    return res;
}

