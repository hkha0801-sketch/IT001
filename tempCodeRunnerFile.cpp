void play(int* arr, int n){
    int buoc=0;
    for (int i = 0; i < n; i++){
        if (arr[i+1]==1 && arr[i+2]==1){
            cout << -1;
            return ;
        }
        else {
            if (arr[i+1]==1&& (i+=2)<n){
                i+=1;
                buoc+=1;
            }
               
            else if ((i+=1)<n){
                buoc+=1;
            }
            else if (arr[i+1]==0 && arr[i+2]==0 && (i+=2)<n){
                i+=2;
                buoc+=1;
            }

        }
    }
    cout << buoc;
}