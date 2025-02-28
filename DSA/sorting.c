void selectionSort(int arr[], int len, int order) {
    int i, j, min;
    if(order == 1){
        for(i = 0; i < len-1; i++) {
        min = i;
            for(j = i; j < len; j++) {
                if(arr[min] > arr[j]) {
                    min = j;
                }
            }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        }
    }
    else{
        for(i = 0; i < len-1; i++) {
        min = i;
            for(j = i; j < len; j++) {
                if(arr[min] < arr[j]) {
                    min = j;
                }
            }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        }
    }
    
}

void insertionSort(int arr[], int len, int order){
    int i, key, j;
    if(order == 1){
        for(i = 1; i < len; i++) {
        key = arr[i];
        j = i-1;
            while(j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j -1;
            }
        arr[j +1] = key;
        }
    }
    else{
        for(i = 1; i < len; i++) {
        key = arr[i];
        j = i-1;
            while(j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j -1;
            }
        arr[j +1] = key;
        }
    }
    
}

void bubbleSort(int arr[], int len, int order) {
    int i, j, temp;
    if(order == 1) {
        for (i = 0; i < len - 1; i++) {
            for (j = 0; j < len - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else{
        for (i = 0; i < len - 1; i++) {
            for (j = 0; j < len - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    
}